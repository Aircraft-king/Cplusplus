#pragma once
#include"Common.h"
#include"./sqlite/sqlite3.h"

//数据库sqlite 封装
class SqliteManager
{
public :
	SqliteManager();
	~SqliteManager();
public:
	//打开数据库
	void Open(const std::string& path);
	//关闭数据库
	void Close();
	//执行sql语句
	void ExecuteSql(const std::string& sql);
	//获取表结果
	void GetTable(const std::string& sql, int& row, int& col, char**&ppRet);
public:
	//c++11
	//不允许数据库对象进行拷贝构造
	SqliteManager(const SqliteManager&) = delete; 
	//不允许数据库对象进行赋值
	SqliteManager& operator=(const SqliteManager&) = delete; 
private:
	sqlite3* m_db; // 数据库对象
};
