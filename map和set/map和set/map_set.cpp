#include<iostream>
#include<set>
#include<map>
#include<string>
using namespace std;

void test_set() {
	//数组构造set
	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0, 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
	set<int> s(arr, arr + sizeof(arr) / sizeof(arr[0]));
	cout << "set的大小：" << s.size() << endl;
	//打印set元素
	for (auto &e : s) {
		cout << e <<" ";
	}
	cout << endl;
	//使用迭代器反向打印
	for (auto it = s.rbegin(); it != s.rend(); ++it) {
		cout << *it << " ";
	}
	cout << endl;
	//统计元素出现次数
	cout << s.count(3) << endl;
}

void test_map() {
	map<string, string> m;
	m.insert(pair<string, string>("peach", "桃子"));
	m.insert(make_pair("banana", "香蕉"));
}
int main() {
	//test_set();
	test_map();

	return 0;
}