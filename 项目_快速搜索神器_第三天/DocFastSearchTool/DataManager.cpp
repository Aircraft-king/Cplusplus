#include"DataManager.h"

#pragma comment(lib, "sqlite/sqlite3.lib")

SqliteManager::SqliteManager() :m_db(nullptr)
{}
SqliteManager::~SqliteManager()
{
	Close();
}

void SqliteManager::Open(const std::string& path)
{
	char *zErrMsg = 0;
	int rc;

	/* Open database */
	rc = sqlite3_open("doc.db", &m_db);
	if (rc)
	{
		fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(m_db));
		exit(0);
	}
	else
	{
		fprintf(stderr, "Opened database successfully\n");
	}

}
void SqliteManager::Close() {
	if (m_db) {
		int rc = sqlite3_close(m_db);
		if (rc != SQLITE_OK) {
			ERROR_LOG("can`t open database");
			return;
		}
		else
			TRACE_LOG("Opened database successfully");
	}
}
void SqliteManager::ExecuteSql(const std::string& sql) {
	char *zErrMsg = 0;
	int rc = sqlite3_exec(m_db, sql.c_str(), 0, 0, &zErrMsg);
	if (rc != SQLITE_OK) {
		ERROR_LOG("SQL error(sql:%s):%s\n", sql.c_str(), zErrMsg);
		sqlite3_free(zErrMsg);
	}
	else
		TRACE_LOG("Exec Sql(sql:%s) successfully\n", sql.c_str());

}
void SqliteManager::GetTable(const std::string& sql, int& row, int& col, char**&ppRet) {
	char *zErrMsg = 0;
	int rc = sqlite3_get_table(m_db, sql.c_str(), &ppRet, 0, 0, &zErrMsg);
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

//////////////////////////////////////////////////////////////////////////////////////////////

DataManager::DataManager() {
	m_dbmgr.Open(DOC_DB);
	InitSqlite();
}
DataManager::~DataManager() {

}
void DataManager::InitSqlite() {
	char sql[MAX_SQL_SIZE] = { 0 };
	sprintf(sql, "create table if not exists %s\
	   (id INTEGER PRIMARY KEY autoincrem\
		ent, doc_path text, doc_name text)", DOC_TABLE);
	m_dbmgr.ExecuteSql(sql);
}

void DataManager::GetDocs(const string &path, set<string>& docs) {
	char sql[MAX_SQL_SIZE] = { 0 };
	sprintf(sql, "select doc_name from %s where doc_path = '%s' ", DOC_TABLE, path.c_str());

	int row = 0;
	int col = 0;
	char **ppRet = 0;

	m_dbmgr.GetTable(sql, row, col, ppRet);

	for (int i = 1; i <= row; ++i) {
		docs.insert(ppRet[i]);
	}
	sqlite3_free_table(ppRet);
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
}