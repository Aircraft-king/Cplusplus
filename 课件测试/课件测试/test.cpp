#include<iostream>
using namespace std;
#include<string>

int find_first_alone_str(string& s) 
{
	int count = 0;
	for (int i = 0; i < s.size(); ++i)
	{
		count = 0;
		for (int j = 0; j < s.size(); ++j)
		{
			if (s[i] == s[j])
			{
				count++;
			}
		}
		if (count == 1) 
		{
			return i;
		}
	}
	return -1;
}
int main() {
	char str[100] = "";
	cin >> str;
	string s(str);  //
	int a = find_first_alone_str(s);

	if (a == -1)
		cout << a << endl;
	else
		cout << s[a] << endl;

	return 0;
}




//#include<iostream>
////#include<vector>
//#include<string>
//#include <algorithm>    // std::sort
//using namespace std;
//
//
//
//int main() {
//	string s("jdisjd");
//	char str[] = "di";
//	cin >> str;
//	size_t a = s.find(str,0);
//	cout << a;
//
//	return 0;
//}
//
//class Solution {
//public:
//	vector<int> static  singleNumber(vector<int>& nums) {
//		vector<int> v;
//		sort(nums.begin(), nums.end());
//
//		if (nums.size() > 1) {
//			for (int i = 1; i < nums.size() - 1; ++i) {
//				if (nums[i] != nums[i - 1] && nums[i] != nums[i + 1]) {
//					v.push_back(nums[i]);
//				}
//			}
//			if (nums[0] != nums[1]) {
//				v.push_back(nums[0]);
//			}
//			if (nums[nums.size() - 2] != nums[nums.size() - 1]) {
//				v.push_back(nums[nums.size() - 1]);
//			}
//		}
//		else {
//			v.push_back(nums[0]);
//		}
//		return v;
//	}
//};
//int main() {
//	vector<int> v;
//	vector<int> x;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(1);
//	v.push_back(3);
//	v.push_back(2);
//	v.push_back(5);
//	x = Solution::singleNumber(v);
//	return 0;
//}




//class Solution {
//public:
//	int static singleNumber(vector<int>& nums) {
//		sort(nums.begin(), nums.end());
//
//		if (nums.size() > 1)
//			for (int i = 1; i < nums.size() - 2; ++i) {
//				if (nums[i] != nums[i - 1] && nums[i] != nums[i + 1]) {
//					return nums[i];
//				}
//			}
//		if (nums[0] != nums[1]) {
//			return nums[0];
//		}
//		if (nums[nums.size() - 2] != nums[nums.size() - 1]) {
//			return nums[nums.size() - 1];
//		}
//		return nums[0];
//	}
//};
//int main() {
//
//	vector<int> nums;
//	nums.push_back(1);
//	//nums.push_back(1);
//	//nums.push_back(2);
//	//nums.push_back(1);
//	int val = Solution::singleNumber(nums);
//	
//
//	return 0;
//}
//class Solution {
//public:
//	int static removeDuplicates(vector<int>& nums) {
//		if (nums.size() > 1) {
//			for (int i = 0; i < nums.size() - 1; i++) {
//				vector<int>::iterator it = nums.begin() + i + 1;
//				for (int j = i + 1; j < nums.size() ; j++) {
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

//int main() {
//
//	vector<int> nums(2,1);
//	int len = Solution::removeDuplicates(nums);
//
//	return 0;
//}
//class Solution {
//public:
//	vector<vector<int>> static generate(int numRows) {
//		vector<vector<int>> tri;
//		tri.resize(numRows);
//		int i = 0;
//		for (i = 0; i < numRows; ++i) {
//			tri[i].resize(i+1, 1);
//		}
//		for (i = 2; i < tri.size(); ++i) {
//			for (int j = 1; j < tri[i].size() - 1; ++j) {
//				tri[i][j] = tri[i - 1][j] + tri[i - 1][j - 1];
//			}
//		}
//		return tri;
//	}
//};

//int main() {
//
//	vector<vector<int>> arr;
//	arr = Solution::generate(5);
//
//	return 0;
//}

//class Solution {
//public:
//	string static addStrings(string num1, string num2) {
//		string num3;
//		int sz1 = num1.size();
//		int sz2 = num2.size();
//		int carry = 0;
//		for (int i = sz1 - 1, j = sz2 - 1; j >= 0, i >= 0; i--, j--) {
//			int sum = carry;
//			sum += (i >= 0) ? num1[i] - '0' : 0;
//			sum += (j >= 0) ? num2[j] - '0' : 0;
//			num3.insert(num3.begin(), '0' + sum % 10);
//			carry = sum / 10;
//		}
//		if (carry == 1) {
//			num3.insert(num3.begin(), '1');
//		}
//		return num3;
//	}
//};
//
//int main() {
//	string num1("0");
//	string num2("0");
//	string num3 = Solution::addStrings(num1, num2);
//	cout << num3;
//	return 0;
//}

//class Solution {
//public:
//	bool static is_num_word(char ch) {
//		return ch >= '0'&&ch <= '9' || ch >= 'a'&&ch <= 'z' || ch >= 'A'&&ch <= 'Z';
//	}
//	 bool static isPalindrome(string s) {
//		if (s.empty()) {
//			return true;
//		}
//		int begin = 0;
//		int last = s.size() - 1;
//		for (int i = 0; i <= last; ++i) {
//			if (s[i] >= 'a'&&s[i] <= 'z') {
//				s[i] -= 32;
//			}
//		}
//		while (begin < last) {
//			while (begin < last && !is_num_word(s[begin])) {
//				begin++;
//			}
//			while (begin < last && !is_num_word(s[last])) {
//				last--;
//			}
//			if (s[begin] != s[last]) {
//				return false;
//			}
//			else {
//				begin++;
//				last--;
//			}
//
//		}
//		return true;
//	}
//};
//int main() {
//
//	string s;
//	s += "A man, a plan, a canal: Panama";
//	if (Solution::isPalindrome(s)) {
//		cout << "true";
//	}
//	else {
//		cout << "false";
//	}
//		
//	return 0;
//}
//
//
//int main() {
//
//	string str;
//
//	getline(cin, str);
//	int pos = str.rfind(" ");
//	if (pos == str.npos) {
//		cout << str.size() << endl;
//	}
//	else {
//		int size = str.size() - pos - 1;
//		cout << size << endl;
//	}
//	return 0;
//}
//
//int main() {
//
//	string str;
//
//	while (getline(cin, str)) {
//		size_t cot = str.rfind(' ');
//		
//
//			cout << (str.size() - cot - 1);
//		
//	}
//	return 0;
//}






//#include<iostream>
//#include<string>
//using namespace std;
//
//
//int main(){
//
//    string str;
//   
//    getline(cin,str);
//    int cot = str.rfind(" ");
//    if(cot = str.npos){
//       cout<<str.size(); 
//    }
//    else{
//
//        cout<<(str.size()-str.npos-1);
//    }
//  return 0;
//}




//int main() {
//	list<int> mylist;
//	mylist.push_front(1);
//	return 0;
//}
//

//
//class String {
//public:   
//	String(const char* str = "jack") { 
//		_str = (char*)malloc(strlen(str) + 1);       
//		strcpy(_str, str); 
//	}
//
//~String() {
//cout << "~String()" << endl;        
//free(_str);
//}
//private:    
//	char* _str;
//};
//
//class Person {
//private:    
//	String _name;   
//	int    _age; 
//};
//
//int main() {
//	Person p;
//	return 0;
//}
//

//void print(int i)
//{
//	cout << "print a integer :" << i << endl;
//}
//
//void print(string str)
//{
//	cout << "print a string :" << str << endl;
//}
//
//int main()
//{
//	print(12);
//	print("hello world!");
//	return 0;
//}



//int Add(int left, int right) { 
//	return left + right; 
//}
//
//double Add(double left, double right) {
//	return left + right; 
//}
//
//long Add(long left, long right) {
//	return left + right;
//}
//
//int main() {
//	cout<<Add(10, 20);    
//	cout << Add(10.0, 20.0);
//	cout << Add(10L, 20L);
//	return 0;
//}






//void TestFunc(int a, int b = 10, int c = 20) { 
//	cout << "a = " << a << endl;   
//	cout << "b = " << b << endl;   
//	cout << "c = " << c << endl; 
//}


//int main() {
//	TestFunc(1,2,3);     // 没有传参时，使用参数的默认值    
//	TestFunc(10);   // 传参时，使用指定的实参 
//}