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

int main() {
	map<int, int>m;
	
}

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