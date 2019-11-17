#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<time.h>
#include<windows.h>
#include<conio.h>

using namespace std;
struct Date
{
	int year;
	int month;
	int day;
};
struct Time
{
	int hour;
	int minute;
	int second;
};
class CDateTime
{
public:
	CDateTime();
	~CDateTime();
public:
	void GetCurDateTime();
	void DateTimeShow();
	CDateTime& operator++(int);
	CDateTime& count();
	CDateTime& operator+=(int x);
	CDateTime& operator--(int);
	CDateTime& count_1();
	CDateTime& operator-=(int x);
    friend ostream& operator<<(ostream &out,CDateTime &x);
	void date_show(int y,int m,int d);
	void DateTimeDShow();

private:
	Date m_date;
	Time m_time;
};

