#include"DataManager.h"

#pragma comment(lib, "sqlite/sqlite3.lib")

SqliteManager::SqliteManager() :m_db(nullptr)
{}
SqliteManager::~SqliteManager()
{
	Close();
}

void SqliteManager::Open(const string &path)
{
	int rc = sqlite3_open(path.c_str(), &m_db);
	if (rc != SQLITE_OK)
	{
		ERROR_LOG("Can't open database");
		
		return;
	}
	else
		TRACE_LOG("Opened database successfully")
}
void SqliteManager::Close() {
	if (m_db) {
		int rc = sqlite3_close(m_db);
		if (rc != SQLITE_OK) {
			ERROR_LOG("can`t close database");

			return;
		}
		else
			TRACE_LOG("colse database successfully");
		m_db = nullptr;
	}
}
void SqliteManager::ExecuteSql(const string& sql) {
	char *zErrMsg = 0;
	int rc = sqlite3_exec(m_db, sql.c_str(), 0, 0, &zErrMsg);
	if (rc != SQLITE_OK) {
		ERROR_LOG("SQL error(sql:%s):%s\n", sql.c_str(), zErrMsg);
		sqlite3_free(zErrMsg);
	}
	else
		TRACE_LOG("Exec Sql(sql:%s) successfully\n", sql.c_str());

}
void SqliteManager::GetResTable(const string& sql, int& row, int& col, char**&ppRet) {
	char *zErrMsg = 0;
	int rc = sqlite3_get_table(m_db, sql.c_str(), &ppRet, &row, &col, &zErrMsg);
	if (rc != SQLITE_OK)
	{
		ERROR_LOG("GetResTable error(sql: %s): %s\n", sql.c_str(), zErrMsg);
		sqlite3_free(zErrMsg);
	}
	else
	{
		TRACE_LOG("GetResTable  successfully");
	}
}
//////////////////////////////////////////////////////////////////////
//自动获取表结果类 实现
AutoGetResTable::AutoGetResTable(SqliteManager *db, const string &sql, int &row, int &col, char **&ppRet)
	:m_db(db), m_ppRet(nullptr)
{
	m_db->GetResTable(sql, row, col, ppRet);
	m_ppRet = ppRet;

}
AutoGetResTable::~AutoGetResTable()
{
	if (m_ppRet)
		sqlite3_free_table(m_ppRet);
}

/////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

DataManager::DataManager() {
	m_dbmgr.Open(DOC_DB);
	InitSqlite();
}
DataManager::~DataManager() {

}
void DataManager::InitSqlite() {
	char sql[MAX_SQL_SIZE] = { 0 };
	sprintf(sql, "create table if not exists %s(id INTEGER PRIMARY KEY autoincrement, doc_path text, doc_name text)", DOC_TABLE);
	m_dbmgr.ExecuteSql(sql);
}

void DataManager::GetDocs(const string &path, set<string>& docs) {
	char sql[MAX_SQL_SIZE] = { 0 };
	sprintf(sql, "select doc_name from %s where doc_path = '%s' ", DOC_TABLE, path.c_str());

	int row = 0;
	int col = 0;
	char **ppRet = 0;

	//m_dbmgr.GetResTable(sql, row, col, ppRet);
	AutoGetResTable at(&m_dbmgr, sql, row, col, ppRet);
	for (int i = 1; i <= row; ++i) {
		docs.insert(ppRet[i]);
	}
	//sqlite3_free_table(ppRet);
}

void DataManager::InsertDoc(const string &path, string doc) {
	char sql[MAX_SQL_SIZE] = { 0 };
	sprintf(sql, "insert into %s values(NULL, '%s', '%s')", DOC_TABLE, path.c_str(), doc.c_str());
	m_dbmgr.ExecuteSql(sql);
}

void DataManager::DeleteDoc(const string &path, string doc)
{
	char sql[MAX_SQL_SIZE] = { 0 };
	sprintf(sql, "delete from  %s where doc_path='%s' and doc_name='%s'", DOC_TABLE, path.c_str(), doc.c_str());
	m_dbmgr.ExecuteSql(sql);
	//递归删除子目录
	string doc_path = path;
	doc_path += "\\";
	doc_path += doc;
	sprintf(sql, "delete from %s where doc_path like '%s%%'", DOC_TABLE, doc_path.c_str());
	
	m_dbmgr.ExecuteSql(sql);
}

void DataManager::Search(const string &key, vector<pair<string, string>> &doc_path)
{
	char sql[MAX_SQL_SIZE] = { 0 };
	//select dco_name, doc_path from doc_tb where doc_name like '%%s%';
	sprintf(sql, "select doc_name, doc_path from %s where doc_name like '%%%s%%'", DOC_TABLE, key.c_str());

	int row = 0, col = 0;
	char **ppRet = 0;

	//m_dbmgr.GetResTable(sql, row, col, ppRet);
	
	AutoGetResTable at(&m_dbmgr, sql, row, col, ppRet);

	//doc_name     doc_path
	//  1.txt        c:\
	//  2.txt        d:\ 

	for (int i = 1; i <= row; ++i)
	{   										//name            path
		doc_path.push_back(make_pair(ppRet[i*col + 0], ppRet[i*col + 1]));
	}

	//sqlite3_free_table(ppRet);  //源代码级别
}