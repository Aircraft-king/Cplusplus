#pragma once
#include"Common.h"
#include"Sysutil.h"
#include"./sqlite/sqlite3.h"

//数据库封装
class SqliteManager {
public:

	SqliteManager();
	~SqliteManager();
public:
	//打开数据库
	void Open(const std::string& path);
	void Close();
	void ExecuteSql(const std::string& sql);
	void GetResTable(const std::string& sql, int& row, int& col, char**&ppRet);
public:
	SqliteManager(const SqliteManager&) = delete;
	SqliteManager& operator=(const SqliteManager&) = delete;
private:
	sqlite3* m_db;
};


///////////////////////////////////////////////////////////////////////
//自动获取表结果类  
class AutoGetResTable
{
public:
	AutoGetResTable(SqliteManager *db, const string &sql, int &row, int &col, char **&ppRet);
	~AutoGetResTable();
public:
	AutoGetResTable(const AutoGetResTable &) = delete;
	AutoGetResTable& operator=(const AutoGetResTable &) = delete;
private:
	SqliteManager *m_db;
	char         **m_ppRet;
};

////////////////////////////////////////////////////////////////////////

#define DOC_DB     "doc.db"
#define DOC_TABLE  "doc_tb"

//数据库管理模块
class DataManager
{
public:
	static DataManager& CreateInstance(); 
public:
	~DataManager();
public:
	void InitSqlite();
public:
	//向数据库获取数据
	void GetDocs(const string &path, set<string>& docs);
	//向数据库插入文档
	void InsertDoc(const string &path, string doc);
	//向数据库删除文档
	void DeleteDoc(const string &path, string doc);
public:
	//
	static void SplitHightLight(const string &str, const string &key, string &prefix, string &HightLight, string &suffix);
	void Search(const string &key, vector<pair<string, string>> &doc_path);
private:
	DataManager();
private:
	SqliteManager m_dbmgr;
};
