#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<stack>
#include<assert.h>
#include<deque>
#include <algorithm> //sort
using namespace std;
//斐波那契数列
int main() {
	vector<int> v(100, 0);
	v[0] = 0;
	v[1] = 1;
	for (int i = 2; i < v.size(); ++i) {
		v[i] = v[i - 1] + v[i - 2];
	}
	int val = 0;
	while (cin >> val) {
		int i = 0;
		for (; i < v.size(); i++) {
			if (val >= v[i] && val <= v[i + 1]) {
				break;
			}
		}
		int front = val - v[i];
		int next = v[i + 1] - val;
		cout << (front > next ? next : front) << endl;

	}
	return 0;
}

//牛客---把字符串转换为整数
//int StrToInt(string str) {
//	int val = 0;
//	int flag = 0;
//	if (str.size() == 0) return 0;
//	if (str[0] == '-')
//		flag = 1;
//	if (str[0] == '-' || str[0] == '+')
//		str.erase(str.begin());
//	for (int i = 1; i < str.size(); ++i) {
//		if (str[i]<'1' || str[i]>'9') {
//			return 0;
//		}
//	}
//	for (int i = str.size() - 1, j = 0; i >= 0; --i, ++j) {
//		val += ((str[i] - '0')*pow(10, j));
//	}
//	if (flag == 1)
//		val = 0 - val;
//	return val;
//}
//int main() {
//	string s = "+12345";
//	int a = StrToInt(s);
//	cout << a << endl;
//	return 0;
//}

//int is_reverse(string tmp) {
//	int first = 0;
//	int last = tmp.size() - 1;
//	while (first < last) {
//		if (tmp[first] != tmp[last]) {
//			return -1;
//		}
//		first++;
//		last--;
//	}
//	return 1;
//}
//
//int main() {
//
//	string A;
//	string B;
//	while (cin >> A) {
//		cin >> B;
//		int count = 0;
//		for (int i = 0; i < A.size(); i++) {
//			string tmp(A.begin(), A.begin() + i);
//			tmp += B;
//			string tmp1(A.begin() + i, A.end());
//			tmp += tmp1;
//			int x = is_reverse(tmp);
//			if (x == 1) {
//				count++;
//			}
//		}
//		if (is_reverse(A + B) == 1) {
//			count++;
//		}
//		cout << count << endl;
//	}
//	return 0;
//}

//int main() {
//	int x = 1;
//	do {
//		printf("%2d", x++);
//	} while (x--);
//	return 0;
//}

//int main() {
//
//	int M;
//	int N;
//	while (cin >> M) {
//		int flag = 0;
//		if (M < 0) {
//			flag = 1;
//			M = 0 - M;
//		}
//		cin >> N;
//		string s; 
//			char str[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
//			if (M == 0) cout << "0" << endl;
//			if (M == 1) cout << "1" << endl;
//		while (M > 0) {
//			int val = M % N;
//			s = str[val] + s;
//			M /= N;
//		}
//		if (flag = 1)
//			s = '-' + s;
//		cout << s << endl;
//	}
//	return 0;
//}

////牛客---计算糖果
//int main() {
//	vector<int> v(4, 0);
//	for (int i = 0; i < 4; ++i) {
//		cin >> v[i];
//	}
//	int flag = 0;
//	int a; int b; int c;
//	for (a = 0; a <= 30; a++) {
//		for (b = 0; b <= 30; b++) {
//			for (c = 0; c <= 30; c++) {
//				if (a - b == v[0] && b - c == v[1] && a + b == v[2] && b + c == v[3]) {
//					cout << a << " " << b << " " << c << endl;
//					flag = 1;
//					break;
//				}
//			}
//			if (flag == 1) break;
//		}
//		if (flag == 1) break;
//	}
//	if (a == 31 && b == 31 && c == 31)
//		cout << "No" << endl;
//	return 0;
//}

//牛客----数组中出现次数超过一半的数字
//int MoreThanHalfNum_Solution(vector<int> numbers) {
//	if (numbers.size() == 0) return 0;
//	if (numbers.size() == 1) return numbers[0];
//	sort(numbers.begin(), numbers.end());
//	vector<int> hash(numbers[numbers.size()-1]+1, 0);
//	for (int i = 0; i < numbers.size(); ++i) {
//		hash[numbers[i]]++;
//	}
//	for (int i = 0; i < hash.size(); ++i) {
//		if (hash[i] > (numbers.size() / 2)) {
//			return i;
//		}
//	}
//	return 0;
//}
//int main() {
//	int arr[9] = { 1,2,3,2,2,2,5,4,2 };
//	vector<int> v(arr,arr+9);
//	int a = MoreThanHalfNum_Solution(v);
//	cout << a << endl;
//	return 0;
//}

////牛客---字符串中找出连续最长的数字串
//int main() {
//	string str;
//	while (getline(cin,str)) {
//		int max = 0;
//		int falg = 0;
//		for (int i = 0; i < str.size(); ++i) {
//			int count = 0;
//			while (str[i] > '9'&&str[i] < '0'&&i < str.size()) {
//				++i;
//			}
//
//			while (str[i] >= '0'&&str[i] <= '9'&&i < str.size()) {
//				count++;
//				++i;
//			}
//			if (count > max) {
//				max = count;
//				falg = i;
//			}
//		}
//		string s(str.begin() + falg - max, str.begin() + falg);
//		cout << s << endl;
//	}
//
//	return 0;
//}

////牛客---倒置字符串
//void my_reverse(char* begin, char* end) {
//	while (begin < end) {
//		char tmp = *begin;
//		*begin = *end;
//		*end = tmp;
//		begin++;
//		end--;
//	}
//}
//
//int main() {
//	string s;
//	while (getline(cin, s)) {
//		reverse(s.begin(), s.end());
//		int first = 0;
//		int last = 0;
//		while (last != s.size()) {
//			while (s[last] == ' '&&last != s.size()) {
//				first++;
//				last++;
//			}
//			while (s[last] != ' '&&last != s.size()) {
//				last++;
//			}
//			if (s[last] == ' '&&last != s.size()) {
//				my_reverse(&s[first], &s[last - 1]);
//				first = last + 1;
//				last = first;
//			}
//
//		}
//		int a = s.rfind(' ');
//		my_reverse(&s[a + 1], &s[s.size() - 1]);
//		while (s[s.size() - 1] == ' ') {
//			s.erase(s.end());
//		}
//		cout << s << endl;
//	}
//	return 0;
//}


//牛客---排序子序列
//int main() {
//	int n = 0;
//	while (cin >> n) {
//		vector<int> v(n + 1, 0);
//		int count = 0;
//		for (int i = 0; i < n; ++i) {
//			cin >> v[i];
//		}
//		for (int i = 0; i < n; ++i) {
//			if (v[i] < v[i + 1]) {
//				while (i < n&&v[i] <= v[i + 1])
//					i++;
//				count++;
//			}
//			else if (v[i] > v[i + 1]) {
//				while (i < n&&v[i] >= v[i + 1])
//					i++;
//				count++;
//			}
//		}
//		cout << count << endl;
//	}
//	return 0;
//}

////牛客  删除公共字符
//int main() {
//	string s1;
//	string s2;
//    while (getline(cin, s1)) {
//	getline(cin, s2);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < s2.size(); ++i) {
//		int size = s1.size();
//			for (j = 0; j < size; ++j) {
//				if (s1[j] == s2[i]) {
//					s1.erase(s1.begin() + j);
//				}
//			}
//		}
//		cout << s1 << endl;
//
//	}
//
//	return 0;
//}


//牛客组队竞速
//int main() {
//	int n = 0;
//
//	while (cin >> n) {
//		vector<int> v(3 * n, 0);
//		for (int i = 0; i < 3 * n; ++i) {
//			cin >> v[i];
//		}
//		sort(v.begin(), v.end());
//		long max = 0;
//		int x = 3 * n - 2;
//		while (n--) {
//			max += v[x];
//			x -= 2;
//		}
//		cout << max << endl;
//	}
//
//	return 0;
//}

//https://leetcode-cn.com/problems/remove-all-adjacent-duplicates-in-string/submissions/

//class Solution {
//public:
//	string removeDuplicates(string S) {
//		stack<char> s;
//		for (int i = 0; i < S.size(); ++i) {
//			if (s.empty()) s.push(S[i]);
//			else if (s.top() == S[i]) {
//				s.pop();
//			}
//			else {
//				s.push(S[i]);
//			}
//		}
//		
//		stack<char> s1;
//		string str;
//		int len = s.size();
//		for (int i = 0; i < len; ++i) {
//			s1.push(s.top());
//			s.pop();
//		}
//		for (int i = 0; i < len; ++i) {
//			str.push_back(s1.top());
//			s1.pop();
//		}
//		return str;
//	}
//};
//
//string stringToString(string input) {
//	assert(input.length() >= 2);
//	string result;
//	for (int i = 1; i < input.length() - 1; i++) {
//		char currentChar = input[i];
//		if (input[i] == '\\') {
//			char nextChar = input[i + 1];
//			switch (nextChar) {
//			case '\"': result.push_back('\"'); break;
//			case '/': result.push_back('/'); break;
//			case '\\': result.push_back('\\'); break;
//			case 'b': result.push_back('\b'); break;
//			case 'f': result.push_back('\f'); break;
//			case 'r': result.push_back('\r'); break;
//			case 'n': result.push_back('\n'); break;
//			case 't': result.push_back('\t'); break;
//			default: break;
//			}
//			i++;
//		}
//		else {
//			result.push_back(currentChar);
//		}
//	}
//	return result;
//}
//
//int main() {
//	string line;
//	while (getline(cin, line)) {
//		string S = stringToString(line);
//
//		string ret = Solution().removeDuplicates(S);
//
//		string out = (ret);
//		cout << out << endl;
//	}
//	return 0;
//}


//class Solution {
//public:
//	string removeDuplicates(string S) {
//		stack<char> s;
//		for (int i = 0; i < S.size(); ++i) {
//			if (s.empty()) s.push(S[i]);
//			else if (s.top() == S[i]) {
//				s.pop();
//			}
//			else {
//				s.push(S[i]);
//			}
//		}
//		string str;
//		for (int i = 0; i < s.size(); ++i) { //有bug
//			str.push_back(s.top());
//			s.pop();
//		}
//		return str;
//	}
//};
//
//string stringToString(string input) {
//	assert(input.length() >= 2);
//	string result;
//	for (int i = 1; i < input.length() - 1; i++) {
//		char currentChar = input[i];
//		if (input[i] == '\\') {
//			char nextChar = input[i + 1];
//			switch (nextChar) {
//			case '\"': result.push_back('\"'); break;
//			case '/': result.push_back('/'); break;
//			case '\\': result.push_back('\\'); break;
//			case 'b': result.push_back('\b'); break;
//			case 'f': result.push_back('\f'); break;
//			case 'r': result.push_back('\r'); break;
//			case 'n': result.push_back('\n'); break;
//			case 't': result.push_back('\t'); break;
//			default: break;
//			}
//			i++;
//		}
//		else {
//			result.push_back(currentChar);
//		}
//	}
//	return result;
//}
//
//int main() {
//	string line;
//	while (getline(cin, line)) {
//		string S = stringToString(line);
//
//		string ret = Solution().removeDuplicates(S);
//
//		string out = (ret);
//		cout << out << endl;
//	}
//	return 0;
//}

//https://leetcode-cn.com/problems/is-subsequence/submissions/

//class Solution {
//public:
//	bool isSubsequence(string s, string t) {
//		if (s.size() == 0) {
//			return true;
//		}
//		int a = 0;
//		int len = s.size();
//		for (int i = 0; i < t.size(); ++i) {
//			if (s[a] == t[i])
//				a++;
//			if (a == len)
//				return true;
//		}
//		return false;
//	}
//};

//https://leetcode-cn.com/problems/power-of-three/submissions/

//class Solution {
//public:
//	bool isPowerOfThree(int n) {
//		if (n == 0) return false;
//		if (n == 1) return true;
//		long m = 1;
//		while (m < n) {
//			m *= 3;
//			if (m == n)
//				return true;
//		}
//		return false;
//	}
//};

//https://leetcode-cn.com/problems/linked-list-cycle/submissions/

/**
 * Definition for singly-linked list.
 * struct ListNode {

 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 //class Solution {
 //public:
 //	bool hasCycle(ListNode *head) {
 //		ListNode* fast = head;
 //		ListNode* slow = head;
 //
 //		while (fast&&fast->next) {
 //			fast = fast->next->next;
 //			slow = slow->next;
 //			if (fast == slow)
 //				return true;
 //		}
 //		return false;
 //	}
 //};

 //https://leetcode-cn.com/problems/max-consecutive-ones/submissions/
 //
 //class Solution {
 //public:
 //	int findMaxConsecutiveOnes(vector<int>& nums) {
 //		int max = 0;
 //		int sum = 0;
 //		for (int i = 0; i < nums.size(); ++i) {
 //			if (nums[i] == 1) {
 //				sum++;
 //			}
 //			else
 //				sum = 0;
 //			if (sum > max) {
 //				max = sum;
 //			}
 //		}
 //		return max;
 //	}
 //};

 //https://leetcode-cn.com/problems/third-maximum-number/

 //class Solution {
 //public:
 //	int thirdMax(vector<int>& nums) {
 //		sort(nums.begin(), nums.end());
 //		for (int i = 0; i < nums.size() - 1; ++i) {
 //			if (nums[i] == nums[i + 1]) {
 //				nums.erase(nums.begin() + i + 1);
 //				i--;
 //			}
 //		}
 //		if (nums.size() < 3)
 //			return nums[nums.size() - 1];
 //		return nums[nums.size() - 3];
 //	}
 //};


 //https://leetcode-cn.com/problems/minimum-depth-of-binary-tree/submissions/

 /**
  * Definition for a binary tree node.
  * struct TreeNode {
  *     int val;
  *     TreeNode *left;
  *     TreeNode *right;
  *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  * };
  */
  //class Solution {
  //public:
  //	int minDepth(TreeNode* root) {
  //		if (!root) return 0;
  //		int l = 0;
  //		int r = 0;
  //		l = minDepth(root->left);
  //		r = minDepth(root->right);
  //		return (l != 0 && r != 0) ? (l < r ? l : r) + 1 : l + r + 1;
  //	}
  //};

  //https://leetcode-cn.com/problems/search-insert-position/submissions/
  //
  //class Solution {
  //public:
  //	int searchInsert(vector<int>& nums, int target) {
  //		if (target <= nums[0] || nums.size() == 0) {
  //
  //			return 0;
  //		}
  //		for (int i = 0; i < nums.size() - 1; ++i) {
  //			if (target > nums[i] && target <= nums[i + 1]) {
  //				return i + 1;
  //			}
  //		}
  //		return nums.size();
  //	}
  //};

  //https://leetcode-cn.com/problems/student-attendance-record-i/submissions/

  //class Solution {
  //public:
  //	bool checkRecord(string s) {
  //		int count = 0;
  //		for (int i = 0; i < s.size(); ++i) {
  //			if (s[i] == 'A') {
  //
  //				count++;
  //
  //			}
  //			if (i < s.size() - 2 && s[i] == 'L' && s[i] == s[i + 1] && s[i] == s[i + 2]) {
  //				return false;
  //			}
  //		}
  //		if (count > 1) {
  //			return false;
  //		}
  //		return true;
  //	}
  //};

  //https://leetcode-cn.com/problems/find-all-numbers-disappeared-in-an-array/submissions/
  //class Solution {
  //public:
  //	vector<int> findDisappearedNumbers(vector<int>& nums) {
  //		vector<int> v;
  //		sort(nums.begin(), nums.end());
  //		for (int i = 0; i < nums.size(); ++i) {
  //			int j = (nums[i] - 1) % nums.size();
  //			nums[j] += nums.size();
  //		}
  //		for (int i = 0; i < nums.size(); ++i) {
  //			if (nums[i] <= nums.size()) {
  //				v.push_back(i + 1);
  //			}
  //		}
  //		return v;
  //	}
  //};
  //
  //void trimLeftTrailingSpaces(string &input) {
  //	input.erase(input.begin(), find_if(input.begin(), input.end(), [](int ch) {
  //		return !isspace(ch);
  //	}));
  //}
  //
  //void trimRightTrailingSpaces(string &input) {
  //	input.erase(find_if(input.rbegin(), input.rend(), [](int ch) {
  //		return !isspace(ch);
  //	}).base(), input.end());
  //}
  //
  //vector<int> stringToIntegerVector(string input) {
  //	vector<int> output;
  //	trimLeftTrailingSpaces(input);
  //	trimRightTrailingSpaces(input);
  //	input = input.substr(1, input.length() - 2);
  //	stringstream ss;
  //	ss.str(input);
  //	string item;
  //	char delim = ',';
  //	while (getline(ss, item, delim)) {
  //		output.push_back(stoi(item));
  //	}
  //	return output;
  //}
  //
  //string integerVectorToString(vector<int> list, int length = -1) {
  //	if (length == -1) {
  //		length = list.size();
  //	}
  //
  //	if (length == 0) {
  //		return "[]";
  //	}
  //
  //	string result;
  //	for (int index = 0; index < length; index++) {
  //		int number = list[index];
  //		result += to_string(number) + ", ";
  //	}
  //	return "[" + result.substr(0, result.length() - 2) + "]";
  //}
  //
  //int main() {
  //	string line;
  //	while (getline(cin, line)) {
  //		vector<int> nums = stringToIntegerVector(line);
  //
  //		vector<int> ret = Solution().findDisappearedNumbers(nums);
  //
  //		string out = integerVectorToString(ret);
  //		cout << out << endl;
  //	}
  //	return 0;
  //}

  //https://leetcode-cn.com/problems/number-of-1-bits/submissions/

  //class Solution {
  //public:
  //	int hammingWeight(uint32_t n) {
  //		int count = 0;
  //		while (n) {
  //			if (n % 2 == 1)
  //				count++;
  //			n /= 2;
  //		}
  //		return count;
  //	}
  //};
  //
  //int stringToInteger(string input) {
  //	return stoi(input);
  //}
  //
  //int main() {
  //	string line;
  //	while (getline(cin, line)) {
  //		int n = stringToInteger(line);
  //
  //		int ret = Solution().hammingWeight(n);
  //
  //		string out = to_string(ret);
  //		cout << out << endl;
  //	}
  //	return 0;
  //}

  //https://leetcode-cn.com/problems/nim-game/submissions/
  //class Solution {
  //public:
  //	bool canWinNim(int n) {
  //		if (n % 4 == 0) {
  //			return false;
  //		}
  //		return true;
  //	}
  //};
  //
  //int stringToInteger(string input) {
  //	return stoi(input);
  //}
  //
  //string boolToString(bool input) {
  //	return input ? "True" : "False";
  //}
  //
  //int main() {
  //	string line;
  //	while (getline(cin, line)) {
  //		int n = stringToInteger(line);
  //
  //		bool ret = Solution().canWinNim(n);
  //
  //		string out = boolToString(ret);
  //		cout << out << endl;
  //	}
  //	return 0;
  //}

  //https://leetcode-cn.com/problems/merge-sorted-array/

  //class Solution {
  //public:
  //	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
  //		for (int i = m, j = 0; i < m + n, j < n; ++i, ++j) {
  //			nums1[i] = nums2[j];
  //		}
  //		sort(nums1.begin(), nums1.end());
  //	}
  //};
  //
  //void trimLeftTrailingSpaces(string &input) {
  //	input.erase(input.begin(), find_if(input.begin(), input.end(), [](int ch) {
  //		return !isspace(ch);
  //	}));
  //}
  //
  //void trimRightTrailingSpaces(string &input) {
  //	input.erase(find_if(input.rbegin(), input.rend(), [](int ch) {
  //		return !isspace(ch);
  //	}).base(), input.end());
  //}
  //
  //vector<int> stringToIntegerVector(string input) {
  //	vector<int> output;
  //	trimLeftTrailingSpaces(input);
  //	trimRightTrailingSpaces(input);
  //	input = input.substr(1, input.length() - 2);
  //	stringstream ss;
  //	ss.str(input);
  //	string item;
  //	char delim = ',';
  //	while (getline(ss, item, delim)) {
  //		output.push_back(stoi(item));
  //	}
  //	return output;
  //}
  //
  //int stringToInteger(string input) {
  //	return stoi(input);
  //}
  //
  //string integerVectorToString(vector<int> list, int length = -1) {
  //	if (length == -1) {
  //		length = list.size();
  //	}
  //
  //	if (length == 0) {
  //		return "[]";
  //	}
  //
  //	string result;
  //	for (int index = 0; index < length; index++) {
  //		int number = list[index];
  //		result += to_string(number) + ", ";
  //	}
  //	return "[" + result.substr(0, result.length() - 2) + "]";
  //}
  //
  //int main() {
  //	string line;
  //	while (getline(cin, line)) {
  //		vector<int> nums1 = stringToIntegerVector(line);
  //		getline(cin, line);
  //		int m = stringToInteger(line);
  //		getline(cin, line);
  //		vector<int> nums2 = stringToIntegerVector(line);
  //		getline(cin, line);
  //		int n = stringToInteger(line);
  //
  //		Solution().merge(nums1, m, nums2, n);
  //
  //		string out = integerVectorToString(nums1);
  //		cout << out << endl;
  //	}
  //	return 0;
  //}

  //https://leetcode-cn.com/problems/majority-element/submissions/

  //class Solution {
  //public:
  //	int majorityElement(vector<int>& nums) {
  //		int target = nums[0];
  //		int count = 1;
  //		for (int i = 1; i < nums.size(); i++)
  //			if (nums[i] != target)
  //			{
  //				count--;
  //				if (count == 0)
  //				{
  //					target = nums[i];
  //					count = 1;
  //				}
  //			}
  //			else count++;
  //		return target;
  //	}
  //};

  //https://leetcode-cn.com/problems/sqrtx/

  //class Solution {
  //public:
  //	int mySqrt(int x) {
  //		long long num = x / 2 + 1;
  //		for (long long i = 0; i <= num; ++i) {
  //			if ((i*i <= x) && ((i + 1)*(i + 1) > x)) {
  //				return i;
  //			}
  //		}
  //		return -1;
  //	}
  //};
  //
  //int stringToInteger(string input) {
  //	return stoi(input);
  //}
  //
  //int main() {
  //	string line;
  //	while (getline(cin, line)) {
  //		int x = stringToInteger(line);
  //
  //		int ret = Solution().mySqrt(x);
  //
  //		string out = to_string(ret);
  //		cout << out << endl;
  //	}
  //	return 0;
  //}

  //https://leetcode-cn.com/problems/add-binary/submissions/

  //class Solution {
  //public:
  //	string addBinary(string a, string b) {
  //
  //		int a_len = a.size();
  //		int b_len = b.size();
  //		while (a_len < b_len) {
  //			a = '0' + a;
  //			a_len++;
  //		}
  //		while (b_len < a_len) {
  //			b = '0' + b;
  //			b_len++;
  //		}
  //		for (int i = a_len - 1; i > 0; --i) {
  //			a[i] = a[i] - '0' + b[i];
  //			if (a[i] >= '2') {
  //				a[i] = (a[i] - '0') % 2 + '0';
  //				a[i - 1] = a[i - 1] + 1;
  //			}
  //		}
  //		a[0] = a[0] - '0' + b[0];
  //		if (a[0] >= '2') {
  //			a[0] = (a[0] - '0') % 2 + '0';
  //			a = '1' + a;
  //		}
  //		return a;
  //	}
  //};
  //
  //string stringToString(string input) {
  //	assert(input.length() >= 2);
  //	string result;
  //	for (int i = 1; i < input.length() - 1; i++) {
  //		char currentChar = input[i];
  //		if (input[i] == '\\') {
  //			char nextChar = input[i + 1];
  //			switch (nextChar) {
  //			case '\"': result.push_back('\"'); break;
  //			case '/': result.push_back('/'); break;
  //			case '\\': result.push_back('\\'); break;
  //			case 'b': result.push_back('\b'); break;
  //			case 'f': result.push_back('\f'); break;
  //			case 'r': result.push_back('\r'); break;
  //			case 'n': result.push_back('\n'); break;
  //			case 't': result.push_back('\t'); break;
  //			default: break;
  //			}
  //			i++;
  //		}
  //		else {
  //			result.push_back(currentChar);
  //		}
  //	}
  //	return result;
  //}
  //
  //int main() {
  //	string line;
  //	while (getline(cin, line)) {
  //		string a = stringToString(line);
  //		getline(cin, line);
  //		string b = stringToString(line);
  //
  //		string ret = Solution().addBinary(a, b);
  //
  //		string out = (ret);
  //		cout << out << endl;
  //	}
  //	return 0;
  //}

  //https://leetcode-cn.com/problems/plus-one/submissions/
  //class Solution {
  //public:
  //	vector<int> plusOne(vector<int>& digits) {
  //		int i = digits.size() - 1;
  //		for (; i >= 0; --i) {
  //			if (digits[i] == 9) {
  //				digits[i] = 0;
  //				if (i - 1 < 0) {
  //					digits[i] = 1;
  //					digits.push_back(0);
  //				}
  //			}
  //			else {
  //				digits[i]++;
  //				break;
  //			}
  //
  //		}
  //		return digits;
  //	}
  //};

  //https://leetcode-cn.com/problems/remove-element/submissions/

  //class Solution {
  //public:
  //	int removeElement(vector<int>& nums, int val) {
  //		for (int i = 0; i < nums.size(); i++) {
  //			if (nums[i] == val) {
  //				nums.erase(nums.begin() + i);
  //				--i;
  //			}
  //		}
  //		return nums.size();
  //	}
  //};

  //https://leetcode-cn.com/problems/intersection-of-two-arrays/submissions/

  //class Solution {
  //public:
  //	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
  //		vector<int> v;
  //		if (!nums1.size() || !nums2.size())
  //			return v;
  //
  //		for (int i = 0; i < nums1.size(); ++i) {
  //			for (int j = 0; j < nums2.size(); ++j) {
  //				if (nums1[i] == nums2[j]) {
  //					v.push_back(nums1[i]);
  //				}
  //			}
  //		}
  //		if (!v.size())
  //			return v;
  //		sort(v.begin(), v.end());
  //		for (int i = 0; i < v.size() - 1; ++i) {
  //			if (v[i] == v[i + 1]) {
  //				v.erase(v.begin() + i + 1);
  //				--i;
  //			}
  //		}
  //		return v;
  //	}
  //};

  //https://leetcode-cn.com/problems/base-7/
  //class Solution {
  //public:
  //	string convertToBase7(int num) {
  //		int base = num;
  //		string s;
  //		while (base) {
  //			
  //			if (base % 7 == 0) {
  //				s.insert(s.begin(), '0');
  //			}
  //			else
  //			s.insert(s.begin(), base%7 + '0');
  //			base /= 7;
  //			
  //		}
  //		if (num < 0) {
  //			s.insert(s.begin(), '-');
  //		}
  //		return s;
  //	}
  //};
  //
  //int stringToInteger(string input) {
  //	return stoi(input);
  //}
  //
  //int main() {
  //	string line;
  //	while (getline(cin, line)) {
  //		int num = stringToInteger(line);
  //
  //		string ret = Solution().convertToBase7(num);
  //
  //		string out = (ret);
  //		cout << out << endl;
  //	}
  //	return 0;
  //}



  //int main() {
  //	int n = 0;
  //	while (cin >> n) {
  //		vector<int> v(n);
  //		for (int i = 0; i < n; ++i) {
  //			cin >> v[i];
  //		}
  //		int count = n - 1;
  //		for (int i = n - 1; i > 0; i--) {
  //			if (v[i] > v[i - 1]) {
  //				count--;
  //			}
  //			else break;
  //		}
  //		cout << count << endl;
  //	}
  //	return 0;
  //}

  //https://www.nowcoder.com/practice/1664fe871878496aa600b6e09557982b?tpId=98&&tqId=33045&rp=1&ru=/activity/oj&qru=/ta/2019test/question-ranking

  //
  //int main() {
  //	int num = 0;
  //	vector<int> v;
  //	while (cin >> num) {
  //		v.push_back(num);
  //	}
  //	sort(v.begin(), v.end());
  //	for (int i = 0; i < v.size() - 1; ++i) {
  //		if (v[i] == v[i + 1]) {
  //			cout << v[i] << endl;
  //			break;
  //		}
  //	}
  //	return 0;
  //}

  //https://leetcode-cn.com/problems/fibonacci-number/submissions/

  //class Solution {
  //public:
  //	int fib(int N) {
  //		if (N == 0) {
  //			return 0;
  //		}
  //		if (N < 3) {
  //			return 1;
  //		}
  //		int a = 1;
  //		int b = 1;
  //		int c = 0;
  //		while (N > 2) {
  //			c = a + b;
  //			a = b;
  //			b = c;
  //			N--;
  //		}
  //		return c;
  //	}
  //};

  //https://www.nowcoder.com/practice/78f83c3f12d2464591ebc5a7
  //3183db35?tpId=101&&tqId=33207&rp=1&ru=/activity/oj&qru=/ta
  ///programmer-code-interview-guide/question-ranking

  //struct list_node {
  //	int val;
  //	struct list_node * next;
  //};
  //
  //
  //list_node * input_list(void)
  //{
  //	int n, val;
  //	list_node * phead = new list_node();
  //	list_node * cur_pnode = phead;
  //	scanf("%d", &n);
  //	for (int i = 1; i <= n; ++i) {
  //		scanf("%d", &val);
  //		if (i == 1) {
  //			cur_pnode->val = val;
  //			cur_pnode->next = NULL;
  //		}
  //		else {
  //			list_node * new_pnode = new list_node();
  //			new_pnode->val = val;
  //			new_pnode->next = NULL;
  //			cur_pnode->next = new_pnode;
  //			cur_pnode = new_pnode;
  //		}
  //	}
  //	return phead;
  //}
  //
  //
  //list_node * selection_sort(list_node * head)
  //{
  //	//////在下面完成代码
  //	vector<int> v;
  //	list_node * p = head;
  //	while (p) {
  //		v.push_back(p->val);
  //		p = p->next;
  //	}
  //	sort(v.begin(), v.end());
  //	p = head;
  //	for (int i = 0; i < v.size(); ++i) {
  //		p->val = v[i];
  //		p = p->next;
  //	}
  //	return head;
  //}
  //
  //
  //void print_list(list_node * head)
  //{
  //	while (head != NULL) {
  //		printf("%d ", head->val);
  //		head = head->next;
  //	}
  //	puts("");
  //}
  //
  //
  //int main()
  //{
  //	list_node * head = input_list();
  //	list_node * new_head = selection_sort(head);
  //	print_list(new_head);
  //	return 0;
  //}

  //https://leetcode-cn.com/problems/hamming-distance/submissions/
  //
  //class Solution {
  //public:
  //	int hammingDistance(int x, int y) {
  //		int num = x ^ y;
  //		int count = 0;
  //		while (num)
  //		{
  //			if (num & 1) count++;
  //			num >>= 1;
  //		}
  //		return count;
  //	}
  //};

  //https://leetcode-cn.com/problems/convert-a-number-to-hexadecimal/submissions/
  //class Solution {
  //public:
  //	string toHex(int num) {
  //		if (num == 0) {
  //			return "0";
  //		}
  //		string str = "";
  //		string s[16] = { "0","1","2","3","4","5","6","7","8","9","a","b","c","d","e","f" };
  //		unsigned int num1 = num;
  //		while (num1 != 0) {
  //			str = s[num1 % 16] + str;
  //			num1 /= 16;
  //		}
  //		return str;
  //	}
  //};


  //https://leetcode-cn.com/problems/move-zeroes/submissions/

  //class Solution {
  //public:
  //	void moveZeroes(vector<int>& nums) {
  //		int count = 0;
  //		vector<int>::iterator it = nums.begin();
  //		while (it != nums.end()) {
  //			if (*it == 0) {
  //				it = nums.erase(it);
  //				count++;
  //				it--;
  //			}
  //			if (it != nums.end())
  //				it++;
  //		}
  //		while (count) {
  //			nums.push_back(0);
  //			count--;
  //		}
  //	}
  //};

  // Forward declaration of isBadVersion API.
  //bool isBadVersion(int version) {
  //	if (version < 2) {
  //		return false;
  //	}
  //	else {
  //		return true;
  //	}
  //}
  //
  //class Solution {
  //public:
  //	int static firstBadVersion(int n) {
  //		if (n == 1) {
  //			return 1;
  //		}
  //		int l = 0;
  //		int r = n - 1;
  //		while (l < r) {
  //			int mid = l + (r - l) / 2;
  //			if (!isBadVersion(mid)) {
  //				l = mid + 1;
  //			}
  //			else {
  //				r = mid - 1;
  //			}
  //		}
  //		return r;
  //	}
  //};
  //int main() {
  //	int a=Solution::firstBadVersion(2);
  //	return 0;
  //}


  ////https://leetcode-cn.com/problems/missing-number/submissions/
  //class Solution {
  //public:
  //	int missingNumber(vector<int>& nums) {
  //		sort(nums.begin(), nums.end());
  //		for (int i = 0; i < nums.size(); ++i) {
  //			if (i != nums[i]) {
  //				return i;
  //			}
  //		}
  //		return nums.size();
  //	}
  //};

  ////https://leetcode-cn.com/problems/ugly-number/submissions/
  //
  //class Solution {
  //public:
  //	bool isUgly(int num) {
  //		if (num == 0) {
  //			return false;
  //		}
  //		while (num != 1) {
  //			if (num % 2 == 0) {
  //				num /= 2;
  //			}
  //			else if (num % 3 == 0) {
  //				num /= 3;
  //			}
  //			else if (num % 5 == 0) {
  //				num /= 5;
  //			}
  //			else {
  //				return false;
  //			}
  //		}
  //		return true;
  //	}
  //};

  //
  //https://leetcode-cn.com/problems/valid-perfect-square/submissions/
  //
  //class Solution {
  //public:
  //	bool isPerfectSquare(int num) {
  //		if (num == 1) {
  //			return true;
  //		}
  //		for (long i = 0; i <= num / 2; ++i) {
  //			if (i*i == num) {
  //				return true;
  //			}
  //		}
  //		return false;
  //	}
  //};
  //
  //https://leetcode-cn.com/problems/find-the-difference/
  //
  //
  //class Solution {
  //public:
  //	char findTheDifference(string s, string t) {
  //		方法一
  //		/*
  //		sort(s.begin(),s.end());
  //		sort(t.begin(),t.end());
  //		for(int i=0; i<s.size(); ++i){
  //			if(s[i]!=t[i]){
  //				return t[i];
  //			}
  //		}
  //		return t[s.size()];
  //		*/
  ///*
  //		方法二
  //		if (s.size() == 0) {
  //			return t[0];
  //		}
  //		for (int i = 0; i < t.size(); ++i) {
  //			s.push_back(t[i]);
  //		}
  //		char a = s[0];
  //		for (int j = 1; j < s.size(); ++j) {
  //			a ^= s[j];
  //		}
  //		return a;
  //	}
  //};
  //
  //https://leetcode-cn.com/problems/guess-number-higher-or-lower/submissions/
  //
  // Forward declaration of guess API.
  // @param num, your guess
  // @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
  //int guess(int num);
  //
  //class Solution {
  //public:
  //	int guessNumber(int n) {
  //		if (n == 1) {
  //			return 1;
  //		}
  //		int l = 0;
  //		int r = n;
  //		while (l <= r) {
  //			int mid = l + (r - l) / 2;
  //			if (guess(mid) == 0) {
  //				return mid;
  //			}
  //			if (guess(mid) == -1) {
  //				r = mid - 1;
  //			}
  //			if (guess(mid) == 1) {
  //				l = mid + 1;
  //			}
  //		}
  //		return -1;
  //		/*  递归算法有问题，无法处理大数
  //		if(guess(n)==-1){
  //			return guessNumber(n-1);
  //		}
  //		if(guess(n)==1){
  //			return guessNumber(n+1);
  //		}
  //		return n;
  //		*/
  ///*
  //	}
  //};
  //
  //
  //https://leetcode-cn.com/problems/lowest-common-ancestor-of-a-binary-search-tree/submissions/
  ///**
  // * Definition for a binary tree node.
  // * struct TreeNode {
  // *     int val;
  // *     TreeNode *left;
  // *     TreeNode *right;
  // *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  // * };
  // */
  ///*
  //class Solution {
  //public:
  //	TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
  //		if (root == NULL || root == p || root == q
  //			|| (root != NULL && root->val > p->val&&root->val < q->val)
  //			|| (root != NULL && root->val<p->val&&root->val>q->val)) {
  //			return root;
  //		}
  //
  //		if (p->val < root->val&&q->val < root->val&&root != NULL) {
  //			return lowestCommonAncestor(root->left, p, q);
  //		}
  //		if (p->val > root->val&&q->val > root->val&&root != NULL) {
  //			return lowestCommonAncestor(root->right, p, q);
  //		}
  //		return root;
  //	}
  //};
  //
  //https://leetcode-cn.com/problems/lowest-common-ancestor-of-a-binary-tree/
  //
  ///**
  // * Definition for a binary tree node.
  // * struct TreeNode {
  // *     int val;
  // *     TreeNode *left;
  // *     TreeNode *right;
  // *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  // * };
  // */
  ///*
  //class Solution {
  //public:
  //	TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
  //		if (root == NULL || root == p || root == q) {
  //			return root;
  //		}
  //		TreeNode* left = lowestCommonAncestor(root->left, p, q);
  //		TreeNode* right = lowestCommonAncestor(root->right, p, q);
  //		if (left&&right) {
  //			return root;
  //		}
  //		return left ? left : right;
  //	}
  //};
  //
  //
  //
  //
  //
  //https://leetcode-cn.com/problems/valid-anagram/
  //class Solution {
  //public:
  //	bool isAnagram(string s, string t) {
  //		sort(s.begin(), s.end());
  //		sort(t.begin(), t.end());
  //		if (s.size() != t.size()) {
  //			return false;
  //		}
  //		for (int i = 0; i < s.size(); ++i) {
  //			if (s[i] != t[i]) {
  //				return false;
  //			}
  //		}
  //		return true;
  //	}
  //};
  //
  //https://leetcode-cn.com/problems/isomorphic-strings/submissions/
  //
  //class Solution {
  //public:
  //	bool isIsomorphic(string s, string t) {
  //		if (s.size() == 0) return true;
  //		for (int i = 0; i < s.size(); ++i) {
  //			if (s.find(s[i]) != t.find(t[i])) {
  //				return false;
  //			}
  //		}
  //		return true;
  //	}
  //};
  //
  //
  //
  //https://leetcode-cn.com/problems/palindrome-linked-list/submissions/
  //
  ///**
  // * Definition for singly-linked list.
  // * struct ListNode {
  // *     int val;
  // *     ListNode *next;
  // *     ListNode(int x) : val(x), next(NULL) {}
  // * };
  // */
  ///*
  //class Solution {
  //public:
  //	bool isPalindrome(ListNode* head) {
  //		if (head == NULL || head->next == NULL) {
  //			return true;
  //		}
  //		ListNode* fast = head;
  //		ListNode* slow = head;
  //		stack<int> s;
  //		while (fast->next != NULL && fast->next->next != NULL) {
  //			fast = fast->next->next;
  //			slow = slow->next;
  //		}
  //		if (fast->next) {
  //			slow = slow->next;
  //		}
  //		while (slow) {
  //			s.push(slow->val);
  //			slow = slow->next;
  //		}
  //		while (!s.empty()) {
  //			if (s.top() != head->val) {
  //				return false;
  //			}
  //			s.pop();
  //			head = head->next;
  //		}
  //		return true;
  //
  //		这个方法有问题  但是现在仍然没有解决 
  //		/*
  //		vector<int> s;
  //		if(head==NULL){
  //			return true;
  //		}
  //		while(!head){
  //			s.push_back(head->val);
  //			head=head->next;
  //		}
  //		int begin = 0;
  //		int end = s.size()-1;
  //		while(begin<end){
  //			if(s[begin]!=s[end]){
  //			return false;
  //			}
  //			begin++;
  //			end--;
  //		}
  //		return true;
  //		*/
  //	}
  //};
  //
  //
  //https://leetcode-cn.com/problems/add-digits/
  //
  //class Solution {
  //public:
  //	int addDigits(int num) {
  //		return (num - 1) % 9 + 1;
  //	}
  //};
  //
  //
  //https://leetcode-cn.com/problems/count-primes/submissions/
  //
  //class Solution {
  //public:
  //	int countPrimes(int n) {
  //		if (n <= 0) {
  //			return 0;
  //		}
  //		int num[n];
  //		int count = 0;
  //		for (int i = 0; i < n; i++)
  //		{
  //			num[i] = i;
  //		}
  //
  //		for (int j = 2; j < n; j++)
  //		{
  //			if (0 != num[j])
  //			{
  //				for (int k = 2; k*j < n; k++)
  //				{
  //					num[k*j] = 0;
  //				}
  //			}
  //		}
  //		for (int z = 2; z < n; ++z) {
  //			if (num[z] != 0) {
  //				count++;
  //			}
  //		}
  //		return count;
  //	}
  //};
  //
  //
  //https://leetcode-cn.com/problems/power-of-two/submissions/
  //class Solution {
  //public:
  //	bool isPowerOfTwo(int n) {
  //		if (n <= 0) {
  //			return false;
  //		}
  //		for (int i = 0; i < 32; ++i) {
  //			if (n == 1) {
  //				return true;
  //			}
  //			if (n % 2 == 1) {
  //				return false;
  //			}
  //			n /= 2;
  //		}
  //		return true;
  //	}
  //};
  //
  //https://leetcode-cn.com/problems/delete-node-in-a-linked-list/submissions/
  ///**
  // * Definition for singly-linked list.
  // * struct ListNode {
  // *     int val;
  // *     ListNode *next;
  // *     ListNode(int x) : val(x), next(NULL) {}
  // * };
  // */
  //class Solution {
  //public:
  //	void deleteNode(ListNode* node) {
  //		ListNode* t = node->next;
  //		node->val = node->next->val;
  //		node->next = node->next->next;
  //		delete t;
  //		t = NULL;
  //	}
  //};
  //
  //https://leetcode-cn.com/problems/reverse-linked-list/
  //
  //
  ///**
  // * Definition for singly-linked list.
  // * struct ListNode {
  // *     int val;
  // *     struct ListNode *next;
  // * };
  // */
  //typedef struct ListNode node;
  //
  //struct ListNode* reverseList(struct ListNode* head) {
  //	node* pre = NULL;
  //	node* cur = head;
  //	node* next = NULL;
  //	while (cur) {
  //		next = cur->next;
  //		cur->next = pre;
  //		pre = cur;
  //		cur = next;
  //	}
  //	return pre;
  //}
  //
  //https://leetcode-cn.com/problems/palindrome-number/submissions/
  //
  //class Solution {
  //public:
  //	bool isPalindrome(int x) {
  //		vector<int> v;
  //		if (x < 0) {
  //			return false;
  //		}
  //		if (x >= 0 && x <= 9) {
  //			return true;
  //		}
  //		while (x) {
  //			v.push_back(x % 10);
  //			x /= 10;
  //		}
  //		int begin = 0;
  //		int end = v.size() - 1;
  //		while (begin < end) {
  //			if (v[begin] != v[end]) {
  //				return false;
  //			}
  //			begin++;
  //			end--;
  //		}
  //		return true;
  //	}
  //};
  //
  //https://leetcode-cn.com/problems/reverse-integer/submissions/
  //class Solution {
  //public:
  //	int reverse(int x) {
  //		if (x >= -9 && x <= 9) {
  //			return x;
  //		}
  //		long p = 0;
  //		while (x) {
  //			p *= 10;
  //			if (p > INT_MAX || p < INT_MIN)
  //			{
  //				return 0;
  //			}
  //			p += x % 10;
  //			x /= 10;
  //		}
  //		return p;
  //	}
  //};
  //
  //
  //https://leetcode-cn.com/problems/two-sum/submissions/
  //class Solution {
  //public:
  //	vector<int> twoSum(vector<int>& nums, int target) {
  //		vector<int> v;
  //		for (int i = 0; i < nums.size() - 1; ++i) {
  //			for (int j = i + 1; j < nums.size(); ++j) {
  //				if (nums[i] + nums[j] == target) {
  //					v.push_back(i);
  //					v.push_back(j);
  //					return v;
  //				}
  //
  //			}
  //		}
  //		return v;
  //	}
  //};
  //
  //https://www.nowcoder.com/practice/
  //1221ec77125d4370833fd3ad5ba72395?
  //tpId=37&&tqId=21260&rp=1&ru=/act
  //ivity/oj&qru=/ta/huawei/question-ranking
  //递归
  //int get_total_val(int month) {
  //	if (month < 3) {
  //		return 1;
  //	}
  //	else {
  //		return get_total_val(month - 2) + get_total_val(month - 1);
  //	}
  //
  //}
  //
  //int main() {
  //	int month = 0;
  //	while (cin >> month) {
  //		int sum = 0;
  //
  //		sum = get_total_val(month);
  //		cout << sum << endl;
  //	}
  //
  //	return 0;
  //}
  //
  //非递归
  //int main() {
  //
  //	int month = 0;
  //	while (cin >> month) {
  //		int num1 = 1;
  //		int num2 = 1;
  //		int tmp;
  //		for (int i = 3; i <= month; ++i) {
  //			tmp = num1 + num2;
  //			num1 = num2;
  //			num2 = tmp;
  //		}
  //		cout << tmp << endl;
  //	}
  //	return 0;
  //}
  //
  //
  //
  //https://leetcode-cn.com/problems/implement-queue-using-stacks/submissions/
  //class MyQueue {
  //public:
  //	stack<int> old_stack;
  //	stack<int> new_stack;
  //	/** Initialize your data structure here. */
  //	MyQueue() {
  //
  //	}
  //
  //	/** Push element x to the back of queue. */
  //	void push(int x) {
  //		new_stack.push(x);
  //	}
  //
  //	/** Removes the element from in front of queue and returns that element. */
  //	int pop() {
  //		swap_stack();
  //		int a = old_stack.top();
  //		old_stack.pop();
  //		return a;
  //	}
  //
  //	/** Get the front element. */
  //	int peek() {
  //		swap_stack();
  //		return old_stack.top();
  //	}
  //	void swap_stack() {
  //		if (!old_stack.empty()) return;
  //		while (!new_stack.empty()) {
  //			old_stack.push(new_stack.top());
  //			new_stack.pop();
  //		}
  //	}
  //	/** Returns whether the queue is empty. */
  //	bool empty() {
  //		if (old_stack.empty() && new_stack.empty()) {
  //			return true;
  //		}
  //		return false;
  //	}
  //};
  //
  ///**
  // * Your MyQueue object will be instantiated and called as such:
  // * MyQueue* obj = new MyQueue();
  // * obj->push(x);
  // * int param_2 = obj->pop();
  // * int param_3 = obj->peek();
  // * bool param_4 = obj->empty();
  // */
  //
  //
  //https://www.nowcoder.com/practice/51dcb4eef6004f6f
  //8f44d927463ad5e8?tpId=98&tqId=32825&tPage=1&rp=1
  //&ru=%2Fta%2F2019test&qru=%2Fta%2F2019test%2Fquestion-ranking
  //
  //int main() {
  //	int l, r;
  //	while (cin >> l >> r) {
  //		int count = 0;
  //		for (int i = l; i <= r; ++i) {
  //			if (i % 3 == 2 || i % 3 == 0) {
  //				count++;
  //			}
  //		}
  //		cout << count << endl;
  //	}
  //	return 0;
  //}
  //
  //
  //int main() {
  //	vector<int> arr;
  //	int count = 0;
  //	int l = 0;
  //	int r = 0;
  //	arr.push_back(0);
  //	for (int i = 1; i < 1000; ++i) {
  //		arr.push_back(i*(1 + i) / 2);
  //	}
  //	cin >> l >> r;
  //	for (int j = l; j <= r; ++j) {
  //		if (arr[j] % 3 == 0) {
  //			count++;
  //		}
  //	}
  //	cout << count << endl;
  //	return 0;
  //}
  //
  //
  //
  //https://leetcode-cn.com/problems/invert-binary-tree/submissions/
  ///**
  // * Definition for a binary tree node.
  // * struct TreeNode {
  // *     int val;
  // *     TreeNode *left;
  // *     TreeNode *right;
  // *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  // * };
  // */
  //class Solution {
  //public:
  //	TreeNode* invertTree(TreeNode* root) {
  //		if (root == NULL) {
  //			return root;
  //		}
  //		TreeNode* tmp = root;
  //		tmp = root->left;
  //		root->left = root->right;
  //		root->right = tmp;
  //		invertTree(root->left);
  //		invertTree(root->right);
  //		return root;
  //	}
  //};
  //
  //
  //https://leetcode-cn.com/problems/implement-stack-using-queues/
  //class MyStack {
  //public:
  //	/** Initialize your data structure here. */
  //	deque<int> q1;
  //	MyStack() {
  //
  //	}
  //
  //	/** Push element x onto stack. */
  //	void push(int x) {
  //		q1.push_back(x);
  //
  //	}
  //
  //	/** Removes the element on top of the stack and returns that element. */
  //	int pop() {
  //		if (!q1.empty()) {
  //			int a = top();
  //			q1.pop_back();
  //			return a;
  //		}
  //		return -1;
  //	}
  //
  //	/** Get the top element. */
  //	int top() {
  //		if (!q1.empty())
  //			return q1[q1.size() - 1];
  //		return -1;
  //	}
  //
  //	/** Returns whether the stack is empty. */
  //	bool empty() {
  //		if (q1.empty())
  //			return true;
  //		return false;
  //	}
  //};
  //
  ///**
  // * Your MyStack object will be instantiated and called as such:
  // * MyStack* obj = new MyStack();
  // * obj->push(x);
  // * int param_2 = obj->pop();
  // * int param_3 = obj->top();
  // * bool param_4 = obj->empty();
  // */
  //
  //
  //
  //https://leetcode-cn.com/problems/contains-duplicate-ii/submissions/
  //class Solution {
  //public:
  //	bool static containsNearbyDuplicate(vector<int>& nums, int k) {
  //		for (int i = 0; i < nums.size(); ++i) {
  //			int l = 0;
  //			vector<int>::iterator it = find(nums.begin() + i + 1, nums.end(), nums[i]);
  //			if (it != nums.end()) {
  //				l = it - (nums.begin() + i);
  //				if (l <= k) {
  //					return true;
  //				}
  //			}
  //		}
  //		return false;
  //	}
  //};
  //int main() {
  //
  //	vector<int> v;
  //	v.push_back(1);
  //	v.push_back(2);
  //	v.push_back(3);
  //	v.push_back(1);
  //	bool a = Solution::containsNearbyDuplicate(v, 3);
  //	cout << a;
  //
  //
  //	return 0;
  //}
  //
  //https://leetcode-cn.com/problems/contains-duplicate/
  //class Solution {
  //public:
  //	bool containsDuplicate(vector<int>& nums) {
  //		int end = nums.size();
  //		sort(nums.begin(), nums.end());
  //		for (int i = 0; i < end - 1; ++i) {
  //			if (nums[i] == nums[i + 1]) {
  //				return true;
  //			}
  //		}
  //		return false;
  //	}
  //};
  //
  //
  //https://leetcode-cn.com/problems/reverse-vowels-of-a-string/submissions/
  //class Solution {
  //public:
  //	string  static reverseVowels(string s) {
  //		if (s.size() != 0) {
  //			int begin = 0;
  //			int end = s.size() - 1;
  //			while (begin < end) {
  //				while (s[begin] != 'a'&&s[begin] != 'A' &&s[begin] != 'e'
  //					&&s[begin] != 'i'&&s[begin] != 'o'&&s[begin] != 'u'
  //					&&s[begin] != 'E' &&s[begin] != 'I'&&s[begin] != 'O'
  //					&&s[begin] != 'U'&&begin < end) {
  //					begin++;
  //				}
  //				while (s[end] != 'a'&&s[end] != 'A'&&s[end] != 'e'&&s[end] != 'i'
  //					&&s[end] != 'o' &&s[end] != 'u'&&s[end] != 'E'
  //					&&s[end] != 'I'&&s[end] != 'O'&&s[end] != 'U'
  //					&&begin < end) {
  //					end--;
  //				}
  //				char tmp;
  //				tmp = s[begin];
  //				s[begin] = s[end];
  //				s[end] = tmp;
  //				begin++;
  //				end--;
  //			}
  //		}
  //		return s;
  //	}
  //};
  //int main() {
  //	string  s = "leetcode";
  //	string s1;
  //	s1 = Solution::reverseVowels(s);
  //	return 0;
  //}
  //int main() {
  //	list<int> s;
  //
  //	return 0;
  //}
  //
  //https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array/submissions/
  //
  //class Solution {
  //public:
  //	int removeDuplicates(vector<int>& nums) {
  //		if (nums.size() > 1) {
  //			for (int i = 0; i < nums.size() - 1; i++) {
  //				vector<int>::iterator it = nums.begin() + i + 1;
  //				for (int j = i + 1; j < nums.size(); ++j) {
  //					if (nums[i] == nums[j]) {
  //						it = nums.erase(it);
  //						j--;
  //					}
  //				}
  //			}
  //		}
  //
  //		return nums.size();
  //	}
  //};
  //
  //
  //
  //
  //
  //https://leetcode-cn.com/problems/kth-largest-element-in-an-array/
  //
  //
  //class Solution {
  //public:
  //	int findKthLargest(vector<int>& nums, int k) {
  //		sort(nums.begin(), nums.end(), greater<int>());
  //		for (int i = 0; i < nums.size(); ++i) {
  //			for (int j = i; j < nums.size(); ++j) {
  //				if (nums[i] != nums[j]) {
  //					--k;
  //				}
  //				if (k == 1) {
  //					return nums[j];
  //				}
  //			}
  //		}
  //		return nums[nums.size() - 1];
  //	}
  //};
