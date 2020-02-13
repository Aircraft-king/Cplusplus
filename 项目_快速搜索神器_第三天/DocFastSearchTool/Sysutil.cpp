#include"Sysutil.h"

void DirectoryList(const string &path, vector<string> &subfile, vector<string> &subdir) {
	string _path = path;
	_path += "\\*.*";

	struct _finddata_t file;
	long handle = _findfirst(_path.c_str(), &file);

	if (handle == -1) {
		cerr<< endl;
		return;
	}
	do {
		if (file.name[0] == '.')
			continue;
		if (file.attrib & _A_SUBDIR)
			subdir.push_back(file.name);
		else
			subfile.push_back(file.name);
	} while (_findnext(handle,&file)==0);
#if 1
	for (auto  &e : subfile)
		cout << e <<endl;
	for (auto &e : subdir) {
		cout << e << endl;
		vector<string> _subdir, _subfile;
		string tmp_path = path;
		tmp_path += "\\";
		tmp_path += e;
		DirectoryList(tmp_path, _subfile, _subdir);
	}
#endif
	_findclose(handle);
}