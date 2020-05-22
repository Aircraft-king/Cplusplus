#include<iostream>
using namespace std;

class CPoint {
public:
	CPoint(int x = 0, int y = 0){
		m_x = x;
		m_y = y;
	}
	int get_x() {
		return m_x;
	}
	int get_y() {
		return m_y;
	}
	void set_x(int x) {
		m_x = x;
	}
	void set_y(int y) {
		m_y = y;
	}
private:
	int m_x;
	int m_y;
};

class CRectangle {
public:
	CRectangle(const CPoint &l,const CPoint &r):l_down(l),r_up(r){}
	void set_lpoint(const CPoint &l) {
		l_down = l;
	}
	void set_rpoint(const CPoint &r) {
		r_up = r;
	}
	int get_perimeter() {
		int p = r_up.get_x() - l_down.get_x() + r_up.get_y() - l_down.get_y();
		return 2 * p;
	}
	int get_area() {
		return (r_up.get_x() - l_down.get_x()) * (r_up.get_y() - l_down.get_y());
	}
private:
	CPoint l_down;
	CPoint r_up;
};

int main() {
	const CPoint a(2, 5), b(6, 8);
	CRectangle *a_rectangle = new CRectangle(a, b);
	cout << "矩形的周长为：" << a_rectangle->get_perimeter() << endl;
	cout << "矩形的面积为：" << a_rectangle->get_area() << endl;
	const CPoint c(4, 6), d(7, 9);
	a_rectangle->set_lpoint(c);
	a_rectangle->set_rpoint(d);
	cout << "矩形的周长为：" << a_rectangle->get_perimeter() << endl;
	cout << "矩形的面积为：" << a_rectangle->get_area() << endl;
	return 0;
}