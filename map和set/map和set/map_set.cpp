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
	m["apple"] = "苹果";
	cout << m.size() << endl;

	for (auto &e : m) {
		cout << e.first << "---" << e.second << endl;
	}
	cout << endl;
	auto ret = m.insert(make_pair("peach", "桃色"));    
	if (ret.second)        
		cout << "<peach, 桃色>不在map中, 已经插入" << endl;    
	else        
		cout << "键值为peach的元素已经存在：" << ret.first->first << "--->" << ret.first->second << " 插入失败" << endl;

	// 删除key为"apple"的元素    m.erase("apple");

	if (1 == m.count("apple"))        
		cout << "apple还在" << endl;   
	else        
		cout << "apple被吃了" << endl;

}
int main() {
	//test_set();
	test_map();

	return 0;
}