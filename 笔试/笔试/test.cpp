#define _CRT_SECURE_NO_WARNINGS 1;
#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<map>
#include<stack>
#include<assert.h>
#include<deque>
#include <algorithm>
#include<unordered_map>
using namespace std;


int main()
{
	string a, b;
	while (cin >> a >> b)
	{
		if (a.size() > b.size())
			swap(a, b);
		string str_m;//存储最长公共子串
		for (int i = 0; i < a.size(); i++)
		{
			for (int j = i; j < a.size(); j++)
			{
				string temp = a.substr(i, j - i + 1);
				if (int(b.find(temp)) < 0)
					break;
				else if (str_m.size() < temp.size())
					str_m = temp;
			}
		}
		cout << str_m << endl;
	}
	return 0;
}

//vector<vector<int> > rotateMatrix(vector<vector<int> > mat, int n)
//{
//	vector<vector<int>> v(n, vector<int>(n));
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < n; j++)
//			v[j][n - 1 - i] = mat[i][j];
//	return v;
//}
//
//int main() {
//	vector<vector<int> > v(3, vector<int>());
//
//	return 0;
//}

//int main() {
//	char a[6] = "abcd";
//	char b[] = "abcdef";
//	//char* c = "abcdef";
//	cout << sizeof(a);
//	cout << sizeof(b);
//	return 0;
//}

//vector < int > findNumber(int num) {
//	vector<int> v;
//	vector<int> v1;
//	v1.push_back(-1);
//	int a = num;
//	int count = 0;
//	while (a) {
//		if (a % 2 == 1)
//			count++;
//		a /= 2;
//	}
//	if (count == 31)
//		return v1;
//	for (long i = num + 1; i != 2147483647; i++) {
//		long b = i;
//		int b_count = 0;
//		while (b) {
//			if (b % 2 == 1)
//				b_count++;
//			b /= 2;
//		}
//		if (b_count == count) {
//			v.push_back(i);
//			break;
//		}
//	}
//	for (long i = num - 1; i > 0; i--) {
//		long b = i;
//		int b_count = 0;
//		while (b) {
//			if (b % 2 == 1)
//				b_count++;
//			b /= 2;
//		}
//		if (b_count == count) {
//			v.push_back(i);
//			break;
//		}
//	}
//	sort(v.begin(), v.end(), greater<int>());
//	if (v.size() < 2) {
//
//		return v1;
//	}
//	return v;
//}
/******************************结束写代码******************************/


//int main() {
//	vector < int > res;
//
//	int _num;
//	cin >> _num;
//	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//
//
//
//	res = findNumber(_num);
//	for (int res_i = 0; res_i < res.size(); res_i++) {
//		cout << res[res_i] << endl;;
//	}
//
//	return 0;
//
//}

//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		int n;
//		int m;
//		int k;
//		cin >> n >> m >> k;
//		vector<int> v1;
//		vector<vector<int>> v(m, vector<int>(3));
//		for (int i = 0; i < m; i++) {
//			for (int j = 0; j < 3; j++) {
//				cin >> v[i][j];
//			}
//		}
//		for (int i = 0; i < m; i++) {
//			if (v[i][2] <= k) {
//				v1.push_back(v[i][0]);
//				v1.push_back(v[i][1]);
//			}
//		}
//		sort(v1.begin(), v1.end());
//		if (v1.size() > 1) {
//			for (int i = 0; i < v1.size() - 1; i++) {
//				if (v1[i] == v1[i + 1]) {
//					v1.erase(v1.begin() + i + 1);
//					i--;
//				}
//			}
//		}
//		
//		if (v1.size() != n) {
//			cout << "NO" << endl;
//		}
//		else {
//			cout << "YES" << endl;
//		}
//	}
//
//	return 0;
//}
/*
string complement(int a) {
	// write code here
	size_t b = a;
	string s(32, '0');
	int i = 31;
	while (b > 0) {
		s[i] = b % 2 + '0';
		b /= 2;
		i--;
	}
	return s;
}
int main() {
	string s = complement(1000000000);
	for (auto &e : s) {
		cout << e << " ";
	}
	return 0;
}



*/
/*
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* reConstructBinaryTreeCore(string next, int nextStart, int nextEnd, string vin, int vinStart, int vinEnd) {
	if (nextStart > nextEnd || vinStart > vinEnd) {
		return nullptr;
	}
	TreeNode *root = new TreeNode(next[nextEnd]);
	for (auto i = vinStart; i <= vinEnd; i++) {
		if (next[nextEnd] == vin[i]) {
			root->left = reConstructBinaryTreeCore(next, nextStart, vinStart + i - 1, vin, vinStart, i - 1);
			root->right = reConstructBinaryTreeCore(next, vinStart + i, nextEnd - 1, vin, i + 1, vinEnd);
			break;
		}
	}
	return root;
}
TreeNode* reConstructBinaryTree(string next, string vin) {
	if (next.empty() || vin.empty()) {
		return nullptr;
	}
	return reConstructBinaryTreeCore(vin, 0, vin.size() - 1, next, 0, next.size() - 1);
}

void print(TreeNode* p) {
	if (p == NULL) {
		return;
	}
	cout << (char)p->val<<" ";
	print(p->left);
	print(p->right);
}

int main() {
	string s1;
	string s2;
	cin >> s1 >> s2;
	TreeNode* p = reConstructBinaryTree(s1,s2);
	print(p);
	return 0;
}
*/

//string removeKdigits(string num, int k) {
//	if (num.size() == k)   return "0";
//	stack<char> stk;//单调栈
//	string res;
//	for (int i = 0; i < num.size(); ++i) {
//		while (!stk.empty() && stk.top() > num[i] && k > 0) {
//			stk.pop();
//			--k;
//		}
//		stk.push(num[i]);
//	}
//	while (k > 0) {
//		stk.pop();
//		--k;
//	}
//	while (!stk.empty()) {
//		res += stk.top();
//		stk.pop();
//	}
//	while (!res.empty() && res.back() == '0') {
//		res.pop_back();
//	}
//	reverse(res.begin(), res.end());
//	if (res.empty()) {
//		res = "0";
//	}
//	return res;
//}
//
//int main() {
//	string s;
//	cin >> s;
//	int k;
//	cin >> k;
//	cout<<removeKdigits(s, k)<<endl;
//
//	return 0;
//}

//bool is_yes(int begin, int end, string &s, string &s1) {
//	vector<int> v1(123, 0);
//	vector<int> v2(123, 0);
//	for (int i = begin; i <= end; i++) {
//		v1[s1[i]]++;
//	}
//	for (int i = 0; i < s.size(); i++) {
//		v2[s[i]]++;
//	}
//	for (int i = 0; i < 123; i++) {
//		if (v1[i] != v2[i])
//			return false;
//	}
//	return true;
//}
//
//int main() {
//	string s;
//	string s1;
//	string s2;
//	getline(cin, s);
//	getline(cin, s1);
//	getline(cin, s2);
//	int begin = 0;
//	int end = s.size() - 1;
//	while (end < s1.size()) {
//		if (is_yes(begin, end, s, s1)) {
//			string t1(s1.begin(), s1.begin() + begin);
//			string t2(s1.begin() + end+1, s1.end());
//			s1 = t1;
//			s1 += s2;
//			s1 += t2;
//			begin += s2.size();
//			end += s2.size();
//		}
//		else {
//			begin++;
//			end++;
//		}
//	}
//	cout << s1 << endl;
//	return 0;
//}

//#include<stdio.h>
//#define FUN(x,y) x+y
//int main() {
//	int y = 2;
//	int cont = 0;
//	while (y<=16)
//	{
//		y = FUN(y, FUN(y, y));
//		cont++;
//
//	}
//	cout << cont;
//	return (0);
//}

/*
class A {

};
class B {
public:
	B() {
	}
	~B(){}
};
class C {
public:
	C(){}
	virtual ~C(){}
};
int main() {
	printf("%d, %d, %d\n", sizeof(A), sizeof(B), sizeof(C));
	return 0;
}
*/
/*
int square(volatile int* ptr)
	{
		return *ptr * *ptr;
	}
int main()
{
	int n = 10;
	int* a = &n;
	int x = square(a);
	cout << x << endl;
	return 0;
}
*/
//vector<int> my_print(vector<int> &v,int n) {
//	int a = pow(10, n);
//	for (int i = 1; i < a; i++) {
//		v.push_back(i);
//	}
//	return v;
//}
//
//int main() {
//	int n;
//	cin >> n;
//	vector<int> v;
//	v = my_print(v,n);
//	for (auto &e : v) {
//		cout << e << " ";
//	}
//	return 0;
//}

//int main() {
//	vector<int> v;
//	int a;
//	while (cin >> a) {
//		v.push_back(a);
//	}
//	int count = 0;
//	for (int i = 0; i < v.size(); i++) {
//		if (v[i] == 0) {
//			v.erase(v.begin() + i);
//			count++;
//			i--;
//		}
//	}
//	for (int i = 0; i < count; i++) {
//		v.push_back(0);
//	}
//	for (int i = 0; i < v.size(); i++) {
//		cout << v[i] << " ";
//	}
//	cout << endl;
//	return 0;
//}

//int vmax(vector<int> v,int max) {
//	if (v.size() == 1) {
//		return max;
//	}
//	if (v.size() == 2) {
//		if (v[0] >= 0) {
//			return max;
//		}
//		if (v[0] < 0) {
//			return v[1];
//		}
//	}
//	else {
//		if (v[0] >= 0) {
//			return max;
//		}
//		if (v[0] < 0 && v[1] >= 0) {
//			return max - v[0];
//		}
//		else {
//			return max - v[0] - v[1];
//		}
//	}
//}
//
//int main() {
//	vector<int> v;
//	int a;
//	while (cin >> a) {
//		v.push_back(a);
//	}
//	int i = 0;
//	int begin = 0;
//	int end = 0;
//	int p = 0;
//	int q = 0;
//	int max = v[0];
//	int tmp = v[0];
//	for (i = 1; i < v.size(); i++) {
//		if (tmp<0 && v[i]>tmp) {
//			tmp = v[i];
//			p = q = i;
//		}
//		else {
//			tmp += v[i];
//			q = i;
//		}
//		if (tmp >= max) {
//			max = tmp;
//			begin = p;
//			end = p;
//		}
//	}
//	vector<int> v1(v.begin() + begin, v.begin() + end + 1);
//	sort(v1.begin(), v1.end());
//	int max_v1 = vmax(v1,max);
//	cout << max_v1 << endl;
//	return 0;
//}

//bool is_WM(string &s) {
//	for (int i = 0; i < s.size(); i++) {
//		if (s[i] == 'm' || s[i] == 'w') {
//			return false;
//		}
//	}
//	return true;
//}
//
//int my_count(int n) {
//	if (n == 1)
//		return 1;
//	if (n == 2)
//		return 2;
//	return my_count(n - 1) + my_count(n - 2);
//}
//
//int main() {
//	string s;
//	cin >> s;
//	if (!is_WM(s))
//		cout << 0;
//	else {
//		int a = 1;
//		int begin = 0;
//		int end = 0;
//		while(end < s.size()) {
//			while (s[end] != 'n'&&end<s.size()) {
//				begin++;
//				end++;
//			}
//			while (s[end]=='n'&&end<s.size())
//			{
//				end++;
//			}
//			if (end - begin > 1) {
//				a *= my_count(end - begin);				
//			}
//			begin = end;
//		}
//		begin = 0;
//		end = 0;
//		while (end < s.size()) {
//			while (s[end] != 'u'&&end < s.size()) {
//				begin++;
//				end++;
//			}
//			while (s[end] == 'u')
//			{
//				end++;
//			}
//			if (end - begin > 1) {
//				a *= my_count(end - begin);	
//			}
//			begin = end;
//		}
//		cout << a << endl;
//	}
//	return 0;
//}

//int pos_max(vector<int> v, int begin) {
//	int n = 1;
//	int sum = 0;
//	for (int i = begin; i < v.size(); i++) {
//		sum += v[i] * n;
//		n++;
//	}
//	return sum;
//}
//
//int main() {
//	vector<int> v;
//	int a = 0;
//	while (cin>>a) {
//		v.push_back(a);
//	}
//	sort(v.begin(),v.end());
//	vector<int> v1;
//	for (int i = 0; i < v.size()-1; i++) {
//		int x = pos_max(v, i);
//		v1.push_back(x);
//	}
//	sort(v1.begin(), v1.end());
//	if (v1[v1.size() - 1] > 0)
//		cout << v1[v1.size()-1] << endl;
//	else
//		cout << 0 << endl;
//
//	return 0;
//}


//int main() {
//	list<int> ls1 = { 1,3,4 };
//	list<int> ls2 = { 1,2,5 };
//	list<int> ls;
//	auto it1 = ls1.begin();
//	auto it2 = ls2.begin();
//	if (*it1 > *it2) {
//		list<int> tmp = ls1;
//		ls1 = ls2;
//		ls2 = tmp;
//	}
//	it1 = ls1.begin();
//	it2 = ls2.begin();
//	while (it1 != ls1.end() && it2 != ls2.end()) {
//		if (*it1 < *it2) {
//			ls.push_back(*it1);
//			it1++;
//		}
//		else {
//			ls.push_back(*it2);
//			it2++;
//		}
//	}
//	while (it1 != ls1.end()) {
//		ls.push_back(*it1);
//			it1++;
//	}
//	while (it2 != ls2.end()) {
//		ls.push_back(*it2);
//			it2++;
//	}
//	for (auto &e : ls) {
//		cout << e << endl;
//	}
//	return 0;
//}
//vector<string> findCommonString(string** values, int valuesRowLen, int* valuesColLen) {
//	// write code here
//	vector<string> v;
//	unordered_map<string, int> mp;
//	for (int i = 0; i < valuesRowLen; i++) {
//		for (int j = 0; j < valuesColLen[i]; j++) {
//			if (mp.find(values[i][j])==mp.end()) 
//			{
//				mp.insert(make_pair(values[i][j], 1));
//			}
//			else
//			{
//				mp[values[i][j]]++;
//
//			}
//		}
//	}
//	auto it = mp.begin();
//	while (it != mp.end()) {
//		i
//	}
//	return v;
//}
//
//int main() {
//	int  v1[3] = { 2,2,2 };
//	vector<string> v[] = { {"aaa","bbb"},{"aba","bbb"},{"caa","bbb"} };
//	
//	findCommonString(v, 3, v1);
//
//
//	return 0;
//}
//
//
//int my_count(int num) {
//	if (num == 0 || num == 1) {
//		return num;
//	}
//	return my_count(num - 1) + my_count(num - 2);
//}
//int translateNum(int num) {
//	// write code here
//	int count = 0;
//	int i = 0;
//	while (num > 0) {
//		if (num % 10 > 4 && (num / 10 % 10) > 1) {
//			i++;
//		}
//		num /= 10;
//		count++;
//	}
//	int a = my_count(count);
//	return a - i;
//}
//
//int main()
//{
//	int a = 12158;
//	cout << translateNum(a);
//	return 0;
//}
//
//
//
//












//int main() {
//	long a;
//	//int a = ss(1);
//	switch (a) 
//	case 1:
//
//	return 0;
//}
//class MyClass {
//public:
//	// ERROR  **********found**********
//	MyClass(int i):value(i)
//
//	{ count++; }
//		void Print()
//	{
//		cout << "There are " << count << " object(s)." << endl;
//	}
//private:
//	const int value;
//	static int count;
//};
//// ERROR  **********found**********
//int MyClass::count = 0;
//int main()
//{
//	MyClass obj1, obj2;
//	// ERROR  **********found**********
//	obj2.Print();
//	return 0;
//}

//int main() {
//	string s;
//	cin >> s;
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		int a, b;
//		cin >> a >> b;
//		char x = a + '0';
//		char y = b + '0';
//		for (int j = 0; j < s.size(); ++j) {
//			if (s[j] == x) {
//				s[j] = y;
//			}
//		}
//	}
//	cout << s << endl;
//	cin.get();
//	return 0;
//}

//ListNode* ReverseList(ListNode* pHead) {
//	if (pHead == NULL || pHead->next == NULL) {
//		return pHead;
//	}
//	stack<ListNode*> st;
//	while (pHead) {
//		st.push(pHead);
//		pHead = pHead->next;
//	}
//	st.pop();
//	ListNode * p = pHead;
//	while (!st.empty()) {
//		p->next = st.top();
//		p = p->next;
//		st.pop();
//	}
//	return pHead;
//}

//int main()
//{
//	string s, res;
//	while (cin >> s)
//	{
//		int begin = 0, end;
//		for (int i = 0; i < s.length(); i++) {
//			res = s[begin] - 32;
//			if (s[i] == 'n' && i != 0) {
//				end = i - 1;
//				res += s.substr(begin + 1, end - begin);
//				cout << res << endl;
//				res = "";
//				begin = end + 1;
//			}
//			else if (s[i] == 'n' && i == s.length() - 1) {
//				res = s[begin] - 32;
//				cout << res << endl;
//				res = "";
//				begin++;
//				end = begin;
//			}
//		}
//
//		if (end != s.length() - 1 && end < s.length()) {
//			res += s.substr(begin + 1, s.length() - begin + 1);
//			cout << res << endl;
//			res = "";
//		}
//	}
//	system("pause");
//	return 0;
//}

//int main() {
//	int m, n;
//	cin >> m >> n;
//	int count = 0;
//	vector<vector<int> > v(m, vector<int>(n));
//	for (int i = 0; i < v.size(); i++) {
//		for (int j = 0; j < v[i].size(); j++) {
//			cin >> v[i][j];
//		}
//	}
//	sort(v.begin(), v.end(),greater<vector<int>>());
//	return 0;
//}

//int main() {
//	string s;
//	cin >> s;
//	vector<string> v;
//	int begin = 0;
//	int end = 1;
//	while (end < s.size()) {
//		while (s[end] != 'n'&&end != 0 && end < s.size())
//			end++;
//		if (s[end] == 'n') {
//			string tmp(s.begin() + begin, s.begin() + end);
//			begin = end;
//			v.push_back(tmp);
//		}
//		end++;
//	}
//	string s1(s.begin() + begin, s.end());
//	v.push_back(s1);
//	for (int i = 1; i < v.size(); i++) {
//		v[i][0] -= 32;
//	}
//	for (int i = 0; i < v.size(); i++)
//		cout << v[i] << endl;
//	return 0;
//}











//int main() {
//	int a = 1;
//	char b = a;
//	if (b == 1)
//		cout << "big" << endl;
//	else
//		cout << "sm" << endl;
//	return 0;
//}

//vector<int> rer(vector<int> v) {
//	int begin = 0;
//	int end = 1;
//	while (end < v.size()) {
//		int tmp = v[begin];
//		v[begin] = v[end];
//		v[end] = tmp;
//		begin += 2;
//		end += 2;
//	}
//	return v;
//}
//
//int main() {
//	int n, m;
//	cin >> n >> m;
//	vector<int> v(m);
//	for (int i = 0; i < m; i++) {
//		cin >> v[i];
//	}
//	vector<int> v1(n);
//	for (int i = 0; i < v1.size(); i++) {
//		v1[i] = i + 1;
//	}
//	for (int i = 0; i < v.size(); i++) {
//		if (v[i] == 1) {
//			int tmp = v1[0];
//			v1.erase(v1.begin());
//			v1.push_back(tmp);
//		}
//		else {
//			v1 = rer(v1);
//		}
//	}
//	for (int i = 0; i < v1.size(); i++) {
//		if (i != v1.size() - 1)
//			cout << v1[i] << " ";
//		else
//			cout << v1[i] << endl;
//	}
//	return 0;
//}

//bool trre(string s) {
//	if (s.size() > 10)
//		return false;
//	int falg = 1;
//	int a = 0;
//	for (int i = 0; i < s.size(); i++) {
//		if ((s[i] >= 'a'&&s[i] <= 'z') || (s[i] >= 'A'&&s[i] <= 'Z'))
//			a++;
//		else
//			falg = 0;
//	}
//	if (falg == 1)
//		return true;
//	return false;
//}
//
//int main() {
//	int n = 0;
//	cin >> n;
//	int count = 0;
//	vector<string> v(n);
//	for (int i = 0; i < n; i++) {
//		cin >> v[i];
//	}
//	for (int i = 0; i < n; i++) {
//		if (trre(v[i])) {
//			count++;
//		}
//	}
//	cout << count << endl;
//	return 0;
//}













//int sneak(int n) {
//	if (n == 0)
//		return 0;
//	if (n == 1)
//		return 1;
//	if (n == 2)
//		return 1;
//	return sneak(n - 1) + sneak(n - 2);
//}
//
//int main() {
//	int n;
//	cin >> n;
//	if (n == 1)
//		cout << 1 << endl;
//	else {
//		vector<vector<long long>> v(n, vector<long long>(n));
//		int a = n * n;
//		int left = 0;
//		int right = n - 1;
//		int up = 0;
//		int down = n - 1;
//		while (left <= right && up <= down) {
//			for (int i = left; i <= right; i++) {
//				v[up][i] = sneak(a);
//				a--;
//			}
//			for (int i = up + 1; i <= down; i++) {
//				v[i][right] = sneak(a);
//				a--;
//			}
//			if (left < right&&up < down) {
//				for (int i = right - 1; i >= left; i--) {
//					v[down][i] = sneak(a);
//					a--;
//				}
//				for (int i = down - 1; i > up; i--) {
//					v[i][left] = sneak(a);
//					a--;
//				}
//			}
//			left++;
//			right--;
//			up++;
//			down--;
//		}
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				if (j != n - 1)
//					cout << v[i][j] << " ";
//				else
//					cout << v[i][j] << endl;
//			}
//		}
//	}
//
//	return 0;
//}



//int main()
//{
//	int a, b, k, tmp, flag;
//	vector<int> res;
//	while (cin >> a >> b >> k) {
//		if (k == 0)
//		{
//			cout << '[' << ']' << endl;
//		}
//		else if (a == 0 && b == 0) {
//			cout << '[' << ']' << endl;
//		}
//		else {
//			res.push_back(a * k);
//			res.push_back(b * k);
//
//			for (int i = 1; i <= k; i++) {
//				tmp = a * i + b * (k - i);
//				flag = 0;
//				for (int j = 0; j < res.size(); j++) {
//					if (res[j] == tmp)
//						flag = 1;
//				}
//				if (flag == 0) {
//					res.push_back(tmp);
//				}
//			}
//			sort(res.begin(), res.end());
//			cout << '[';
//			for (int i = 0; i < res.size() - 1; i++) {
//				cout << res[i] << ',';
//			}
//			cout << res[res.size() - 1];
//			cout << ']' << endl;
//		}
//
//
//	}
//
//	system("pause");
//	return 0;
//}

//vector < int > divingBoard(int a, int b, int k) {
//	vector<int> v;
//	if (k == 0)
//		return v;
//	for (int i = 0; i <= k; i++) {
//		int sum = i * a + (k - i)*b;
//		v.push_back(sum);
//	}
//	sort(v.begin(), v.end());
//	for (int i = 0; i < v.size() - 1; i++) {
//		if (v[i] == v[i + 1]) {
//			v.erase(v.begin() + i);
//			i--;
//		}
//	}
//	return v;
//}
///******************************结束写代码******************************/
//
//
//int main() {
//	vector < int > res;
//
//	int _a;
//	cin >> _a;
//	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//
//
//	int _b;
//	cin >> _b;
//	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//
//
//	int _k;
//	cin >> _k;
//	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//
//
//
//	res = divingBoard(_a, _b, _k);
//	cout << "[";
//	for (int res_i = 0; res_i < res.size(); res_i++) {
//		if (res_i != res.size() - 1)
//			cout << res[res_i] << ",";
//		else
//			cout << res[res_i] << "]" << endl;
//	}
//	return 0;
//}











//int main() {
//	int n, a, b;
//	cin >> n >> a >> b;
//	vector<vector<int>> v(n, vector<int>(2));
//	int sum = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < 2; j++) {
//			cin >> v[i][j];
//		}
//	}
//	sort(v.begin(), v.end(),greater<vector<int>>());
//	while (a) {
//		sum += v[0][0];
//		v.erase(v.begin());
//		a--;
//	}
//	for (int i = 0; i < b; i++) {
//		int max = 0;
//		int falg = 0;
//		for (int j = 0; j < v.size(); j++) {
//			if (max < v[j][1]) {
//				max = v[j][1];
//				falg = j;
//			}
//		}
//		sum += max;
//		v.erase(v.begin() + falg);
//	}
//	cout << sum << endl;
//	return 0;
//}

//bool rever(int a, int b) {
//	string s;
//	while (a) {
//		s.push_back(a % 10 + '0');
//		a /= 10;
//	}
//	reverse(s.begin(), s.end());
//	while (s[0] == '0') {
//		s.erase(s.begin());
//	}
//	int i = 0;
//	while (b) {
//		if ((b % 10 +'0')!= s[i]) {
//			return false;
//		}
//		b /= 10;
//		i++;
//	}
//	return true;
//}
//
//
//int main() {
//	long long n;
//	cin >> n;
//	vector<vector<int>> v;
//	for (int i = 2178; i <= (n / 4); i++) {
//		if (rever(i, 4 * i)) {
//			vector<int> tmp;
//			tmp.push_back(i);
//			tmp.push_back(4 * i);
//			v.push_back(tmp);
//		}
//	}
//	cout << v.size() << endl;
//	for (int i = 0; i < v.size(); i++) {
//		cout << v[i][0] << " " << v[i][1] << endl;
//	}
//	return 0;
//}










//int main()
//{
//	int n = 0;
//	while (cin >> n) {
//		map<int, int> mp;
//
//	}
//	return 0;
//}
//int main() {
//	int n = 0;
//	cin >> n;
//	vector<vector<int>> v(n, vector<int>(2));
//	for (int i = 0; i < v.size(); i++) {
//		for (int j = 0; j < 2; j++) {
//			cin >> v[i][j];
//		}
//	}
//	while (n--) {
//		int a = v[0][1];
//		int falg = 0;
//		for (int j = 0; j < v.size(); j++) {
//			if (a >= v[j][1]) {
//				a = v[j][1];
//				falg = j;
//			}
//		}
//		printf("%d %d\n", v[falg][0], v[falg][1]);
//		v.erase(v.begin() + falg);
//	}
//	return 0;
//}




//int main() {
//	int n = 0;
//	while (cin >> n) {
//		vector<vector<int>> v(n, vector<int>(2));
//		for (int i = 0; i < v.size(); i++) {
//			for (int j = 0; j < 2; j++) {
//				cin >> v[i][j];
//			}
//		}
//		for (int i = 0; i < v.size()-1; i++) {
//			for (int j = i+1; j < v.size(); j++) {
//				if (v[i][1] > v[j][1]) {
//					vector<int> tmp = v[i];
//					v[i] = v[j];
//					v[j] = tmp;
//				}
//			}
//		}
//		for (int i = 0; i < v.size(); i++) {
//			printf("%d %d\n", v[i][0], v[i][1]);
//		}
//	}
//	return 0;
//}


//
//
//int main() {
//	map<int, int>m;
//	
//}


//int main() {
//	int n = 0;
//	cin >> n;
//	vector<int> v(n);
//	for (int i = 0; i < n; i++) {
//		cin >> v[i];
//	}
//	vector<int> v1(v);
//	sort(v1.begin(), v1.end());
//	vector<int> v2;
//	for (int i = v1.size() - 1; i >= 0; --i) {
//		for (int j = v.size() - 1; j >= 0; --j) {
//			if (v1[i] == v[j])
//			{
//				v2.push_back(j);
//				break;
//			}
//		}
//	}
//	int k = 0;
//	for (k = 1; k < v2.size(); ++k) {
//		if (v[k] > v[k - 1])
//			break;
//	}
//	cout << n - k - 1 << endl;
//	return 0;
//}

//long long my_find(vector<long long> &v) {
//	int i = 0;
//	int l = 0;
//	int r = 0;
//	int falg = 0;
//	for (i = v.size() - 1; i > 0; --i) {
//		if (v[i] == v[i - 1]) {
//			l = v[i];
//			falg = 1;
//		}
//		if (falg == 1) {
//			falg = 0;
//			break;
//		}
//	}
//	for (int j = i - 2; j > 0; --j) {
//		if (v[j] == v[j - 1]) {
//			r = v[j];
//			falg = 1;
//		}
//		if (falg == 1)
//			break;
//	}
//	return l * r;
//}
//
//int main() {
//	int n = 0;
//	cin >> n;
//	if (n < 4)
//		cout << "-1" << endl;
//	else {
//		vector<long long> v(n);
//		for (int i = 0; i < n; i++) {
//			cin >> v[i];
//		}
//		sort(v.begin(), v.end());
//		long long l = 0;;
//		l = my_find(v);
//		if (l == 0)
//			cout << "-1" << endl;
//		else
//			cout << l << endl;
//	}
//
//	return 0;
//}
