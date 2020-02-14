#include"Sysutil.h"
//设置光标位置
void SetCurPos(int x, int y)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos = { (short)y, (short)x };
	SetConsoleCursorPosition(handle, pos);
}
//隐藏光标
void HideCursor()
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cursor_info = { 100, 0 };
	SetConsoleCursorInfo(handle, &cursor_info);
}
//画列  ||
void DrawCol(int x, int y)
{
	for (int i = 0; i < HEIGHT; ++i)
	{
		SetCurPos(x + i, y);
		printf("||");
	}
}

//画行 =
void DrawRow(int x, int y)
{
	for (int i = 0; i < WIDTH - 4; ++i)
	{
		SetCurPos(x, y + i);
		printf("=");
	}
}

void SystemEnd()
{
	SetCurPos(HEIGHT - 1, (WIDTH - 4 - strlen("请按任意键继续 . . .")) / 2);
}

//画系统框架界面
void DrawFrame(char *title)
{
	//设置标题
	char buf[MAX_BUF_SIZE] = { 0 };
	sprintf(buf, "title %s", title);
	system(buf);

	//设置界面的宽度和高度
	memset(buf, 0, MAX_BUF_SIZE);
	sprintf(buf, "mode con cols=%d lines=%d", WIDTH, HEIGHT);
	system(buf);

	//设置颜色

	//设置系统界面
	DrawCol(0, 0);  //左边列
	DrawCol(0, WIDTH - 2); //右边列
	DrawRow(0, 2);
	DrawRow(2, 2);
	DrawRow(4, 2);

	DrawRow(HEIGHT - 6, 2);
	DrawRow(HEIGHT - 4, 2);
	DrawRow(HEIGHT - 2, 2);
}

extern char *title;
void DrawMenu()
{
	//设置标题
	SetCurPos(1, (WIDTH - 4 - strlen(title)) / 2);
	printf("%s", title);

	//设置名称 路径
	SetCurPos(3, 2);
	printf("%-30s%-85s", "名称", "路径");

	//设置 exit 退出系统
	SetCurPos(HEIGHT - 3, (WIDTH - 4 - strlen("exit 退出系统 .")) / 2);
	printf("%s", "exit 退出系统 .");

	//设置 输入:>
	SetCurPos(HEIGHT - 5, 2);
	printf("%s", "请输入:>");
}

/////////////////////////////////////////////////////////////////////////////
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
#if 0
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