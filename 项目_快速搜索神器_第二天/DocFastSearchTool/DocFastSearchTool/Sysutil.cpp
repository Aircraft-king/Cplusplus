#include"Sysutil.h"

void DirectoryList(const string &path, vector<string> &subfile, vector<string> &subdir)
{
	//"C:\\Users\\baoso\\Desktop\\55班\\test\\阶段性考试试卷\\*.*";
	string _path = path;
	_path += "\\*.*";  //通配符  * ？%

	struct _finddata_t file;

	long handle = _findfirst(_path.c_str(), &file);
	if(handle == -1)
	{
		perror("_findfirst");
		return;
	}

	do
	{
		if(file.name[0] == '.')
			continue;

		//_A_SUBDIR
		//是一个文件夹
		if(file.attrib & _A_SUBDIR)     
			subdir.push_back(file.name);
		else
			subfile.push_back(file.name);
	}while(_findnext(handle, &file) == 0);

#if 1
	//显示文档
	for(auto &e : subfile)
		cout<<e<<endl;

	//显示目录
	for(auto &e : subdir)
	{
		cout<<e<<endl;
		//递归显示目录里面的文件
		vector<string> _subfile, _subdir;

		//"C:\\Users\\baoso\\Desktop\\55班\\test\\阶段性考试试卷\\C语言";
		string tmp_path = path;
		tmp_path += "\\";
		tmp_path += e;
		DirectoryList(tmp_path, _subfile, _subdir);
	}
#endif
	_findclose(handle);
}