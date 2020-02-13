#pragma once
#include"Common.h"
#include"sqlite/sqlite3.h"
#include"Sysutil.h"
#include"DataManager.h"

class ScanManager {
public:
	void ScanDirectory(const string &path);
private:
	DataManager m_db;
};