#include"ScanManager.h"

void ScanManager::ScanDirectory(const string &path) {
	
	//扫描本地文件
	vector<string> local_files;
	vector<string> local_dirs;
	DirectoryList(path,local_files,local_dirs);
	set<string> local_set;
	local_set.insert(local_files.begin(), local_files.end());
	local_set.insert(local_dirs.begin(), local_dirs.end());

	//扫描数据库文件
	set<string> db_set;

	m_db.GetDocs(path, db_set);

	//文件对比
	auto local_it = local_set.begin();
	auto db_it = db_set.begin();
	while (local_it != local_set.end() && db_it != db_set.end()) {
		if (*local_it < *db_it) {
			m_db.InsertDoc(path, *local_it);
			++local_it;
		}
		else if (*local_it > *db_it) {
			m_db.DeleteDoc(path, *db_it);
			++db_it;
		}
		else {
			++local_it;
			++db_it;
		}
	}

	while (local_it != local_set.end()) {
		m_db.InsertDoc(path, *local_it);
		++local_it;
	}
	while (db_it != db_set.end()) {
		m_db.DeleteDoc(path, *db_it);
		++db_it;
	}
	for (auto &dir : local_dirs)
	{
		
		string dir_path = path;
		dir_path += '\\';
		dir_path += dir;

		ScanDirectory(dir_path);
	}
}