#include<iostream>
#include<string>
using namespace std;
class MyDate
{
public:
	int year;
	int month;
	int day;
public:
	double diffYear() {
		return ((-year + 2010 - 1) + (12 - month) / 12.0);
	};
	int getyear() { return year; };
	int getmonth() { return month; };
	int getday() { return day; };
};
class Person
{
public:
	Person(string b, string c)
	{
		id = b;
		phonenumber = c;
	};
	void print() {
		cout << "name=" << name << endl;
		cout << "id=" << id << endl;
		cout << "phonenumber=" << endl;
	};
protected:
	string name, id, phonenumber;
};     //基类
class Student :public Person
{
public:
	Student(string a2, string b1, string b2) :Person(b1, b2), grade(a2) {};
	void print() {
		cout << "grade=" << grade << endl;
	};
protected:
	const string grade;
};    //学生类
class Employee :public Person
{
public:
	Employee(string c2, string c3) :Person(c2, c3) {};
	void print() {
		cout << "" << office << endl;
		cout << "dateHired=" << dateHired.getyear() << "-" << dateHired.getmonth() << "-" << dateHired.getday() << endl;
	};
	MyDate dateHired;
protected:
	string office;
	double salary;
};   //雇佣者类
class Staff :public Employee
{
public:
	Staff(double a5, double a6, string a8, string a7) :Employee(a8, a7), BasicWages(a5), Allowance(a6) {};
	void print() {
		cout << "position=" << position << endl;
		cout << "BasicWages=" << BasicWages << endl;
		cout << "Allowance=" << Allowance << endl;
	};
	double basicwages() { return BasicWages; };
	double allowance() { return Allowance; };
	string Position() { return position; };
protected:
	string position;
	const double BasicWages;
	const double Allowance;
};    //员工类
class Faculty :public Employee
{
public:
	Faculty(string c, string c4, string c5) :Employee(c4, c5), rank(c) {};
	void print() { cout << "rank=" << rank << endl; };
	string Rank() { return rank; };
protected:
	const string rank;
};
int main() {
	double jiaoshi, yuangong;
	Person person("1", "237141");
	Student student("Freshman", "2", "237142");
	Employee employee("1", "237141");
	Faculty faculty("Professor", "3", "237143");
	Staff staff(1500, 200, "4", "237144");
	if (faculty.Rank() == "Professor")
		jiaoshi = 3 * (staff.basicwages());
	if (faculty.Rank() == "AssociateProfessor")
		jiaoshi = 2 * (staff.basicwages());
	if (faculty.Rank() == "AssistantProfessor")
		jiaoshi = 1 * (staff.basicwages());
	cin >> staff.dateHired.year >> staff.dateHired.month >> staff.dateHired.day;
	cout << "教师工资为:" << jiaoshi << endl;
	yuangong = staff.basicwages() + staff.allowance()*staff.dateHired.diffYear();
	cout << staff.dateHired.diffYear() << endl;
	cout << "员工工资为:" << yuangong << endl;
	return 0;
}