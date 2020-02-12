#include"ScanManager.h"

void ScanManager::ScanDirectory(const string &path)
{
	//1 扫描本地文件 并进行存储
	vector<string> local_files;
	vector<string> local_dirs;
	DirectoryList(path, local_files, local_dirs);
	set<string> local_set;
	local_set.insert(local_files.begin(), local_files.end());
	local_set.insert(local_dirs.begin(), local_dirs.end());

	//2 扫描数据库文件 并进行存储
	set<string> db_set;
	//

	//3 进行文件对比
	auto local_it = local_set.begin();
	auto db_it = db_set.begin();
	while(local_it!=local_set.end() && db_it!=db_set.end())
	{
		if(*local_it < *db_it)
		{
			//本地文件存在，数据库文件不存在，则数据库增加文件
			//增加文件
			++local_it;
		}
		else if(*local_it > *db_it)
		{
			//本地文件不存在，数据库文件存在，则数据库删除文件
			//删除文件
			++db_it;
		}
		else
		{
			//本地文件存在，数据库文件也存在，则数据库不变
			++local_it;
			++db_it;
		}
	}

	//本地文件存在， 增加数据库文件
	while(local_it != local_set.end())
	{
		//增加文件
		++local_it;
	}

	//数据库文件存在， 删除数据库文件
	while(db_it != db_set.end())
	{
		//删除文件
		++db_it;
	}

	//递归遍历子目录
	//

}