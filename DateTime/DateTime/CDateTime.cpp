
#include"CDateTime.h"

#define ESC 0x1B

void HideCursor()
{
	HANDLE hd = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cursor_info = { 1, 0 };
	SetConsoleCursorInfo(hd, &cursor_info);
}
void ShowCursor()
{
	HANDLE hd = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cursor_info = { 1, 1 };
	SetConsoleCursorInfo(hd, &cursor_info);
}
CDateTime::CDateTime()
{
	m_date.year = 1;
	m_date.month = 1;
    m_date.day = 1;
	m_time.hour = 0;
	m_time.minute = 0;
	m_time.second = 0;
}
CDateTime::~CDateTime()
{}
void CDateTime::GetCurDateTime()
{
	time_t te;
	time(&te);

	struct tm *ptm = localtime(&te);
	m_date.year = ptm->tm_year + 1900;
	m_date.month = ptm->tm_mon + 1;
	m_date.day = ptm->tm_mday;
	m_time.hour = ptm->tm_hour;
	m_time.minute = ptm->tm_min;
	m_time.second = ptm->tm_sec;
}
void CDateTime::DateTimeShow()
{
	GetCurDateTime();
	cout << m_date.year << "年" << m_date.month << "月" << m_date.day << "日" << \
		m_time.hour << "时 " << m_time.minute << "分 " << m_time.second << "秒 " << endl;
}


void CDateTime::DateTimeDShow()
{
	HideCursor();
	while (1)
	{
		if (_kbhit())
		{
			//ESC
			int val = _getch();
			if (val == ESC)
				break;
		}
		GetCurDateTime();
		DateTimeShow();
		Sleep(1000);
		system("cls");
	}
	ShowCursor();
}
CDateTime& CDateTime::operator++(int) {
	CDateTime tmp;
	int count = 0;
	time_t te;
	time(&te);
	struct tm *ptm = localtime(&te);
	m_date.year = ptm->tm_year + 1900;
	m_date.month = ptm->tm_mon + 1;
	m_date.day = ptm->tm_mday;
	if (m_date.month == 1 || m_date.month == 3 || m_date.month == 5
		|| m_date.month == 7 || m_date.month == 8 || m_date.month == 10) {
		if (m_date.day == 31) {
			count++;
		}
	}
	if (m_date.month == 12 && m_date.day == 31) {
		m_date.year++;
		m_date.month = 1;
		m_date.day = 0;
	}
	if (m_date.month == 4 || m_date.month == 6 || m_date.month == 9
		|| m_date.month == 11) {
		if (m_date.day == 30) {
			count++;
		}
	}
	if ((m_date.year % 4 == 0 && m_date.year % 100 != 0) || m_date.year % 400 == 0) {
		if (m_date.month == 2 && m_date.day == 29) {
			count++;
		}
	}
	else {
		if (m_date.month == 2 && m_date.day == 28) {
			count++;
		}
	}
	if (count != 0) {
		m_date.month++;
		m_date.day = 1;
	}
	else {
		m_date.day++;
	}
	return *this;
}

CDateTime& CDateTime::count() {
	int count = 0;
	if (m_date.month == 1 || m_date.month == 3 || m_date.month == 5
		|| m_date.month == 7 || m_date.month == 8 || m_date.month == 10) {
		if (m_date.day == 31) {
			count++;
		}
	}
	if (m_date.month == 12 && m_date.day == 31) {
		m_date.year++;
		m_date.month = 0;
		m_date.day = 0;
		count++;
	}
	if (m_date.month == 4 || m_date.month == 6 || m_date.month == 9
		|| m_date.month == 11) {
		if (m_date.day == 30) {
			count++;
		}
	}
	if ((m_date.year % 4 == 0 && m_date.year % 100 != 0) || m_date.year % 400 == 0) {
		if (m_date.month == 2 && m_date.day == 29) {
			count++;
		}
	}
	else {
		if (m_date.month == 2 && m_date.day == 28) {
			count++;
		}
	}
	if (count != 0) {
		m_date.month++;
		m_date.day = 1;
	}
	else {
		m_date.day++;
	}
	return *this;
}


CDateTime& CDateTime::operator--(int) {
	int count = 0;
	time_t te;
	time(&te);
	struct tm *ptm = localtime(&te);
	m_date.year = ptm->tm_year + 1900;
	m_date.month = ptm->tm_mon + 1;
	m_date.day = ptm->tm_mday;
	m_date.year = 2016;
	m_date.month = 12;
	m_date.day = 1;
	if ((m_date.month == 2 || m_date.month == 4 || m_date.month == 6
		|| m_date.month == 8 || m_date.month == 9 || m_date.month == 11)
		&& m_date.day == 1) {

		m_date.month--;
		m_date.day = 31;

	}
	if (m_date.month == 1 && m_date.day == 1) {
		m_date.year--;
		m_date.month = 12;
		m_date.day = 31;
	}
	if ((m_date.month == 5 || m_date.month == 7
		|| m_date.month == 10|| m_date.month == 12) && m_date.day == 1) {
		m_date.month--;
		m_date.day = 30;
	}
	if ((m_date.year % 4 == 0 && m_date.year % 100 != 0) || m_date.year % 400 == 0) {
		if (m_date.month == 3 && m_date.day == 1) {
			m_date.month--;
			m_date.day = 29;
		}

	}
	if (m_date.month == 3 && m_date.day == 1) {
		m_date.month--;
		m_date.day = 28;
	}
	else
		m_date.day--;

	return *this;
}

CDateTime& CDateTime::count_1() {
	int count = 0;
	time_t te;
	time(&te);
	struct tm *ptm = localtime(&te);
	if ((m_date.month == 2 || m_date.month == 4 || m_date.month == 6
		|| m_date.month == 8 || m_date.month == 9 || m_date.month == 11)
		&& m_date.day == 1) {

		m_date.month--;
		m_date.day = 31;

	}
	 if (m_date.month == 1 && m_date.day == 1) {
		m_date.year--;
		m_date.month = 12;
		m_date.day = 31;
	}
	 if ((m_date.month == 5 || m_date.month == 7
		|| m_date.month == 10) && m_date.day == 1) {
		m_date.month--;
		m_date.day = 30;
	}
	 if ((m_date.year % 4 == 0 && m_date.year % 100 != 0) || m_date.year % 400 == 0) {
		if (m_date.month == 3 && m_date.day == 1) {
			m_date.month--;
			m_date.day = 29;
		}

	}
	 if (m_date.month == 3 && m_date.day == 1) {
		m_date.month--;
		m_date.day = 28;
	}
	else
		m_date.day--;

	return *this;
}

int get_week(int y, int m, int d) {
	int w = 0;
	while (m < 3) {
		y -= 1;
		m += 12;
	}
	int c = y / 100;
	int year = y % 100;
	w = year + (year / 4) + (c / 4) - 2 * c + (26 * (m + 1) / 10) + d - 1;
	return w % 7;
}
int get_days(int y, int m) {
	int days[13] = { 29,31,28,31,30,31,30,31,31,30,31,30,31 };
	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
		return days[0];
	}
	return days[m];
}
void CDateTime::date_show(int y, int m, int d) {
	time_t te;
	time(&te);

	struct tm *ptm = localtime(&te);
	m_date.year = ptm->tm_year + 1900;
	m_date.month = ptm->tm_mon + 1;
	m_date.day = ptm->tm_mday;
	int week = get_week(y, m, d);
	int days = get_days(y, m);
	system("cls");
	cout << "         今天是 " << m_date.year << "年" << m_date.month << "月" << m_date.day << "日" << endl;
	cout << endl;
	cout << endl;
	cout << "星期一      " << "星期二      " << "星期三     " << "星期四      " << "星期五      " << "星期六      " << "星期天      " << endl;
	cout << endl;
	cout << endl;
	for (int i = 0; i < week - 1; ++i) {
		cout << "            ";
	}
	for (int i = 1; i <= days; ++i) {
		if (i / 10 == 0)
			cout << i << "           ";
		else
			cout << i << "          ";
		if (get_week(y,m,i) == 0) {
			cout << endl;
			cout << endl;
			cout << endl;
		}
		
	}
	    cout << endl;
		cout << endl;
		cout << endl;
}
ostream& operator<<(ostream &out, CDateTime &x) {
	out << x.m_date.year << "年" << x.m_date.month << "月" << x.m_date.day << "日";
	return out;
}
CDateTime& CDateTime::operator+=(int x) {
	CDateTime tmp;
	time_t te;
	time(&te);
	struct tm *ptm = localtime(&te);
	 m_date.year = ptm->tm_year + 1900;
	 m_date.month = ptm->tm_mon + 1;
	 m_date.day = ptm->tm_mday;
	 while (x--) {
		 (*this).count();
	}
	return *this;
}
CDateTime& CDateTime::operator-=(int x) {
	CDateTime tmp;
	time_t te;
	time(&te);
	struct tm *ptm = localtime(&te);
	m_date.year = ptm->tm_year + 1900;
	m_date.month = ptm->tm_mon + 1;
	m_date.day = ptm->tm_mday;
	while (x--) {
		(*this).count_1();
	}
	return *this;
}
