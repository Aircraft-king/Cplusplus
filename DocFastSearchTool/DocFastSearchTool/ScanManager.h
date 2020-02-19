#pragma once
#include"Common.h"
#include"Sysutil.h"
#include"DataManager.h"

class ScanManager {
public:
	static ScanManager& CreateInstance(const string &path);
public:
	void StartScan(const string&path);
	void ScanDirectory(const string &path);
private:
	ScanManager();
	//DataManager m_db;
};