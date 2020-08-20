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
using namespace std;

int main()
{
	int a, b, k, tmp, flag;
	vector<int> res;
	while (cin >> a >> b >> k) {
		if (k == 0)
		{
			cout << '[' << ']' << endl;
		}
		else if (a == 0 && b == 0) {
			cout << '[' << ']' << endl;
		}
		else {
			res.push_back(a * k);
			res.push_back(b * k);

			for (int i = 1; i <= k; i++) {
				tmp = a * i + b * (k - i);
				flag = 0;
				for (int j = 0; j < res.size(); j++) {
					if (res[j] == tmp)
						flag = 1;
				}
				if (flag == 0) {
					res.push_back(tmp);
				}
			}
			sort(res.begin(), res.end());
			cout << '[';
			for (int i = 0; i < res.size() - 1; i++) {
				cout << res[i] << ',';
			}
			cout << res[res.size() - 1];
			cout << ']' << endl;
		}


	}

	system("pause");
	return 0;
}

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
