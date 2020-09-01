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


vector<string> findCommonString(string** values, int valuesRowLen, int* valuesColLen) {
	// write code here
	vector<string> v;
	unordered_map<string, int> mp;
	for (int i = 0; i < valuesRowLen; i++) {
		for (int j = 0; j < valuesColLen[i]; j++) {
			if (mp.find(values[i][j])==mp.end()) 
			{
				mp.insert(make_pair(values[i][j], 1));
			}
			else
			{
				mp[values[i][j]]++;

			}
		}
	}
	auto it = mp.begin();
	while (it != mp.end()) {
		i
	}
	return v;
}

int main() {
	int  v1[3] = { 2,2,2 };
	vector<string> v[] = { {"aaa","bbb"},{"aba","bbb"},{"caa","bbb"} };
	
	findCommonString(v, 3, v1);


	return 0;
}


int my_count(int num) {
	if (num == 0 || num == 1) {
		return num;
	}
	return my_count(num - 1) + my_count(num - 2);
}
int translateNum(int num) {
	// write code here
	int count = 0;
	int i = 0;
	while (num > 0) {
		if (num % 10 > 4 && (num / 10 % 10) > 1) {
			i++;
		}
		num /= 10;
		count++;
	}
	int a = my_count(count);
	return a - i;
}

int main()
{
	int a = 12158;
	cout << translateNum(a);
	return 0;
}
















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
///******************************½áÊøÐ´´úÂë******************************/
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
