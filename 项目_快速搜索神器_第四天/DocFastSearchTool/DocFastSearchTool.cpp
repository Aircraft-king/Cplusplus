#include"Common.h"
#include"Sysutil.h"

#include"ScanManager.h"
#include"DataManager.h"
char a[] = "文档快速搜索工具";
char *title = a;

int main()
{
	//创建扫描实例
	const string path = "E:\\桌面\\快速搜索文档神器";
	ScanManager sm;
	sm.ScanDirectory(path);

	//创建搜索实例
	string key;
	vector<pair<string, string>> doc_path; //用于保存搜索的结果
	DataManager dm;

	int row = 5;
	int count;
	while (1)
	{
		DrawFrame(title);
		DrawMenu();
		cin >> key;
		if (key == string("exit"))
			break;
		dm.Search(key, doc_path);

		//显示结果
		count = 0;
		for (auto &e : doc_path)
		{
			string &name = e.first; //
			string &path = e.second;

			SetCurPos(row + count++, 2);
			printf("%-30s%-85s\n", name.c_str(), path.c_str());
		}
		doc_path.clear();

		SystemEnd();
		system("pause");
	}

	SystemEnd();
	return 0;
}


//void TestDirectoryList() {
//
//	string path = "E:\\桌面\\快速搜索文档神器";
//	vector<string> subfile, subdir;
//	DirectoryList(path, subfile, subdir);
//
//}
//
//int main() {
//
//	TestDirectoryList();
//
//	return 0;
//}