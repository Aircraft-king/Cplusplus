#include"Common.h"
#include"Sysutil.h"

void TestDirectoryList() {

	string path = "E:\\桌面\\快速搜索文档神器";
	vector<string> subfile, subdir;
	DirectoryList(path, subfile, subdir);

}

int main() {

	TestDirectoryList();

	return 0;
}