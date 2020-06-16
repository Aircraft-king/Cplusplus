#include<iostream>
#include<string>
using namespace std;

class Fan{
public:
	Fan(int speed,int radius,string color,bool on) : m_speed(speed),
	m_radius(radius),m_color(color),m_on(on){
	}
	void display() {
		cout << "转速：" << m_speed << "  " ;
		cout << "开关(1为开，0为关)：" << m_on << "  " ;
		cout << "半径：" << m_radius << "  " ;
		cout<< "颜色：" << m_color << endl;
	}
	
private:
	int m_speed;
	bool m_on;
	int m_radius;
	string m_color;
};

int main(){
	Fan f1(3, 10, "yellow", true);
	f1.display();
	Fan f2(2,5,"blue",false);
	f2.display();
	return 0;
} 
