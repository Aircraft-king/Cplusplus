#include"Common.h"
#include"Sysutil.h"

void Test_DirectoryList()
{
	string path = "C:\\Users\\baoso\\Desktop\\55°à\\test\\½×¶ÎÐÔ¿¼ÊÔÊÔ¾í";
	vector<string> subfile, subdir;
	DirectoryList(path, subfile, subdir);

	for(auto &e : subfile)
	{
		//cout<<typeid(e).name()<<endl; //string
		cout<<e<<endl;
	}
	for(auto &e : subdir)
		cout<<e<<endl;
}

int main(int argc, char *argv[])
{
	Test_DirectoryList();
	return 0;
}