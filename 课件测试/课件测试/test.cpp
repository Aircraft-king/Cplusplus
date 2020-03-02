#define _CRT_SECURE_NO_WARNINGS 1
#include<vector>
#include <algorithm> 
//#include<stack>
#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

int main() {
	int n = 0;

	while (cin >> n) {
		vector<int> v(3 * n, 0);
		for (int i = 0; i < 3 * n; ++i) {
			cin >> v[i];
		}
		int max = 0;
		while (v.size() != 0) {
			sort(v.begin(), v.begin() + 3);
			max += v[1];
			v.erase(v.begin(), v.begin() + 3);
		}
		cout << max << endl;
	}

	return 0;
}

//int main() {
//	int arr[10] = { 2,3,5,4,1,9,6,8,7,0 };
//	sort(arr,arr+10);
//	for (int i = 0; i < 10; ++i) {
//		cout << arr[i] << " ";
//	}
//	return 0;
//}


//int main() {
//	int num = 0;
//	int arr[10] = {};
//	int n = sizeof(arr) / sizeof(int);
//	cout << "请输入10个数:>" << endl;
//	for (int i = 0; i <n ; ++i) {
//		cin >> num;
//		arr[i] = num;
//	}
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n-1; ++i) {
//		for ( j= 0; j < n-1-i; ++j) {
//			if (arr[j] > arr[j+1]) {
//				/*int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;*/
//				swap(arr[j], arr[j + 1]);
//			}
//		}
//	}
//	for (int i = 0; i < n; ++i) {
//		cout << arr[i] << " ";
//	}
//
//	return 0;
//}


//int main() {
//	string s1, s2;
//	while (cin >> s1) {
//
//		cin >> s2;
//		int len1 = s1.size();
//		int len2 = s2.size();
//		for (int i = 0; i < len2; ++i) {
//			for (int j = 0; j < s1.size(); ++j) {
//				if (s1[j] == s2[i]) {
//					s1.erase(s1.begin() + j);
//					--j;
//				}
//			}
//		}
//		cout << s1 << endl;
//	}
//	return 0;
//}

//友元关系不能继承
//class Student; 
//class Person {
//public:    
//      friend void Display(const Person& p, const Student& s); 
//protected:   
//	string _name; // 姓名 
//}; 
//class Student : public Person
//{ 
//protected:    
//	int _stuNum; // 学号 
//};
//void Display(const Person& p, const Student& s) 
//{ 
//     cout << p._name << endl;    cout << s._stuNum << endl; 
//}
//int main() { 
//	Person p;    
//	Student s;    
//	Display(p, s); 
//	return 0;
//}



//
//class String
//{
//public:
//	String(const char *str = "")
//	{
//		m_data = new char[strlen(str) + 1];
//		strcpy(m_data, str);
//	}
//	String(const String &s) :m_data(nullptr)
//	{
//		String tmp(s.m_data);
//		swap(m_data, tmp.m_data);
//	}
//	String& operator=(const String &s)
//	{
//		if (this != &s)
//		{
//			String tmp(s);
//			swap(m_data, tmp.m_data);
//		}
//		return *this;
//	}
//	~String()
//	{
//		if (m_data)
//		{
//			delete[]m_data;
//			m_data = NULL;
//		}
//	}
//private:
//	char *m_data;
//};
//
//template<typename T>
//void Copy(T *dst, const T *src, size_t sz, bool IsPOD)
//{
//	//cout<<typeid(T).name()<<endl;
//	//bool IsPOD = IsPODType(typeid(T).name());
//	if (IsPOD)
//		memcpy(dst, src, sizeof(T)*sz);
//	else
//	{
//		for (int i = 0; i < sz; ++i)
//		{
//			dst[i] = src[i];
//		}
//	}
//}
//
//
//bool IsPODType(const char *type)
//{
//	const char* type_ar[] = {
//								"bool",
//								"short",
//								"int",
//								"float",
//								"long",
//								"double"
//	};
//	int n = sizeof(type_ar) / sizeof(const char*);
//	for (int i = 0; i < n; ++i)
//	{
//		if (strcmp(type, type_ar[i]) == 0)
//			return true;
//	}
//	return false;
//}
//int main()
//{
//	int ar1[5] = { 11,22,33,44,55 };
//	int ar2[5];
//	Copy(ar2, ar1, 5, IsPODType("int"));
//	String sa1[3] = { "aa", "bb", "cc" };
//	String sa2[3];
//	Copy(sa2, sa1, 3, IsPODType("String"));
//	return 0;
//}
//int main() {
//
//	vector<int> ar(10, 2);
//	ar.push_back(1);
//	sort(ar.begin(), ar.end());
//
//	return 0;
//}



/*int find_first_alone_str(string& s)
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
	while (cin>>str&& *str != EOF)
	string s(str);
	int a = find_first_alone_str(s);

	if (a == -1)
		printf("%d\n", a);
	else
		cout << s[a] << endl;
	return 0;
}*/


/*
class String
{
public:
	String(const char *str = "")
	{
		m_data = new char[strlen(str) + 1];
		strcpy(m_data, str);
	}
	String(const String &s) :m_data(nullptr)
	{
		String tmp(s.m_data);
		swap(m_data, tmp.m_data);
	}
	String& operator=(const String &s)
	{
		if (this != &s)
		{
			String tmp(s);
			swap(m_data, tmp.m_data);
		}
		return *this;
	}
	~String()
	{
		if (m_data)
		{
			delete[]m_data;
			m_data = NULL;
		}
	}
private:
	char *m_data;
};
//class Test
//{
//public:
//	Test(int d = 0) : m_data(d)
//	{}
//private:
//	int m_data;
//};
////////////////////////////////////////////////////////////
//bool IsPODType(const char *type)
//{
//	const char* type_ar[] = {
//								"bool",
//								"short",
//								"int",
//								"float",
//								"long",
//								"double"
//	};
//	int n = sizeof(type_ar) / sizeof(const char*);
//	for (int i = 0; i < n; ++i)
//	{
//		if (strcmp(type, type_ar[i]) == 0)
//			return true;
//	}
//	return false;
//}
struct __true_type
{};
struct __false_type
{};
template<class T>
struct type_traits
{
	typedef __false_type IsPODType;  //类型的萃取
};
template<>
struct type_traits<int>
{
	typedef __true_type IsPODType; //
};
//template<>
//struct type_traits<Test>
//{
//	typedef __true_type IsPODType; //
//};
////////////////////////////////////////////////////////////////
template<typename T>
void _Copy(T *dst, const T *src, size_t sz, __true_type)
{
	memcpy(dst, src, sizeof(T)*sz);
}
template<typename T>
void _Copy(T *dst, const T *src, size_t sz, __false_type)
{
	for (int i = 0; i < sz; ++i)
	{
		dst[i] = src[i];
	}
}
//通用
template<typename T>
void Copy(T *dst, const T *src, size_t sz)
{
	//类型萃取
	typename typedef  type_traits<T>::IsPODType IsPOD;  //
	//typedef type_traits<int>::IsPODType IsPOD;
	//__true_type IsPOD;
	_Copy(dst, src, sz, IsPOD());  //__true_type()
}
int main()
{
	int ar1[5] = { 11,22,33,44,55 };
	int ar2[5];
	Copy(ar2, ar1, 5);
	String sa1[3] = { "aa", "bb", "cc" };
	String sa2[3];
	Copy(sa2, sa1, 3);
	//Test st1[3] = { 10,20,30 };
	//Test st2[3];
	//Copy(st2, st1, 3);
	return 0;
}
/*
//通用
template<typename T>
void Copy(T *dst, const T *src, size_t sz, bool IsPOD)
{
	//cout<<typeid(T).name()<<endl;
	//bool IsPOD = IsPODType(typeid(T).name());
	if(IsPOD)
		memcpy(dst, src, sizeof(T)*sz);
	else
	{
		for(int i=0; i<sz; ++i)
		{
			dst[i] = src[i];
		}
	}
}
bool IsPODType(const char *type)
{
	const char* type_ar[] = {
								"bool",
								"short",
								"int",
								"float",
								"long",
								"double"
							};
	int n = sizeof(type_ar) / sizeof(const char*);
	for(int i=0; i<n; ++i)
	{
		if(strcmp(type, type_ar[i]) == 0)
			return true;
	}
	return false;
}
void main()
{
	int ar1[5] = {11,22,33,44,55};
	int ar2[5];
	Copy(ar2, ar1, 5, IsPODType("int"));
	String sa1[3] = {"aa", "bb", "cc"};
	String sa2[3];
	Copy(sa2, sa1, 3, IsPODType("String"));
}
/*
template<class T1, class T2>
class Data
{
public:
	Data()
	{
		cout << "Data<T1, T2>" << endl;
	}
private:
	T1 _d1;
	T2 _d2;
};
template<>
class Data<int, char>
{
public:
	Data()
	{
		cout << "Data<int, char>" << endl;
	}
private:
	int _d1;
	char _d2;
};
template<>
class Data<int, int>
{
public:
	Data()
	{
		cout << "Data<int, char>" << endl;
	}
private:
	int _d1;
	char _d2;
};
template<class T1>
class Data<T1, int>
{
public:
	Data()
	{
		cout << "Data<T1, T2>" << endl;
	}
private:
	T1 _d1;
	int _d2;
};
template<class T1, class T2>
class Data<T1*, T2*>
{
public:
	Data()
	{
		cout << "Data<T1, T2>" << endl;
	}
private:
	T1 _d1;
	T2 _d2;
};
template<class T>
class Data<T*, T*>
{
public:
	Data()
	{
		cout << "Data<T1, T2>" << endl;
	}
private:
	T _d1;
	T _d2;
};
void main()
{
	Data<int*, double*> d1;
	Data<int*, int*> d2;
}
/*
void main()
{
	Data<int, int> d1;
	Data<char, int> d2;
	Data<int, char> d3;
	Data<double, int> d4;
}
/*
class Student
{
public:
	Student(int i, char *n, char *s)
	{
		id = i;
		strcpy(name, n);
		strcpy(sex, s);
	}
public:
	bool operator==(const Student &s)
	{
		if(id==s.id && !strcmp(name, s.name) && !(strcmp(sex,s.sex)))
			return true;
		return false;
	}
private:
	int id;
	char name[10];
	char sex[3];
};
//泛化
template<typename Type>
bool IsEqual(Type &left, Type &right)
{
	return left == right;
}
//特化
template<>
bool IsEqual<char*>( char* &left, char* &right)
{
	if(strcmp(left, right) == 0)
		return true;
	return false;
}
template<>
bool IsEqual<Student>(Student &left, Student &right)
{
	return left == right;
}
void main()
{
	char *s1 = "Hello";
	char *s2 = "Hello";
	//char s1[] = "Hello";
	//char s2[] = "Hello";
	int a = 20;
	int b = 20;
	bool flag = IsEqual(a, b);
	cout<<"flag = "<<flag<<endl;
	flag = IsEqual(s1, s2);
	cout<<"flag = "<<flag<<endl;
	Student stu1(10000, "附近阿里","男");
	Student stu2(10001, "漏发了","女");
	flag = IsEqual(stu1, stu2);
	cout<<"flag = "<<flag<<endl;
	//cout<<strcmp(s1, s2)<<endl;
}
/*
//类型参数
template<typename Type>
Type Max(Type a, Type b)
{
	return a > b ? a : b;
}
//非类型参数
template<typename Type, int N>
class Array
{
public:
	Array()
	{
		memset(ar, 0, sizeof(Type)*N);
	}
private:
	Type ar[N];
};
void main()
{
	//Max<int>(10,20);
	Array<int, 10> a;
	//Array<int> a;
}
*/




/*
//力扣：203. 移除链表元素

 // Definition for singly-linked list.
 struct ListNode {
	  int val;
	  struct ListNode *next;
  };



struct ListNode* removeElements(struct ListNode* head, int val) {
	if (head == NULL) {
		return NULL;
	}
	struct ListNode* p = head;
	struct ListNode* pre = NULL;
	while (p) {
		if (p->val == val) {
			struct ListNode* next = p->next;
			if (pre == NULL) {
				head = p->next;
			}
			else {
				pre->next = p->next;
			}
			free(p);
			p = next;
		}
		else {
			pre = p;
			p = p->next;
		}
	}
	return head;
}
int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}

int dive(int x, int y)
{
	return x / y;
}
int main()
{
	int select = 1;
	int ret = 0;
	int x = 0;
	int y = 0;
	int(*p[5])(int, int) = { add, sub, mul, dive };
	while (select)
	{
		printf("**************************\n");
		printf("******1.add		2.sub*******\n");
		printf("******3.mul		4.dive*****\n");
		printf("**************************\n");
		printf("请选择\n");
		scanf("%d", &select);
		if (select >= 1 && select <= 4)
		{
			printf("请输入你要计算的数字\n");
			scanf("%d%d", &x, &y);
			ret = (*(p[select - 1]))(x, y);
			printf("%d\n", ret);
		}
		else
		{
			printf("请重新输入\n");
		}

	}
	system("pause");
	return 0;
}

//#include<string.h>
//class Solution {
//public:
//	int static evalRPN(vector<string>& tokens) {
//		stack<string> arr;
//		int val = (int)stof(tokens[0]);
//		for (int i = 0; i < tokens.size(); ++i) {
//			if (tokens[i] != "+"
//				&& tokens[i] != "-"
//				&& tokens[i] != "*"
//				&& tokens[i] != "/") {
//				arr.push(tokens[i]);
//			}
//			else {
//				int a = (int)stof(arr.top());
//				arr.pop();
//				int b = (int)stof(arr.top());
//				arr.pop();
//				if (tokens[i] == "+") {
//					val = (a + b);
//				}
//				if (tokens[i] == "-") {
//					val = (b - a);
//				}
//				if (tokens[i] == "*") {
//					val = (a*b);
//				}
//				if (tokens[i] == "/") {
//					val = (b / a);
//				}
//				char sum[1000];
//				sprintf(sum, "%d", val);
//				arr.push(sum);
//			}
//		}
//		return val;
//	}
//};
//
//int main() {
//
//	vector<string> tokens;
//	tokens.push_back("2");
//	tokens.push_back("1");
//	tokens.push_back("+");
//	tokens.push_back("3");
//	tokens.push_back("*");
//
//	int a = Solution::evalRPN(tokens);
//	cout << a;
//	return 0;
//}


//class Solution {
//public:
//	bool static IsPopOrder(vector<int> pushV, vector<int> popV) {
//		if (pushV.size() == 0) {
//			return false;
//		}
//		stack<int> s;
//		int i = 1;
//		int j = 0;
//		while (i <= pushV.size()) {
//			s.push(i++);
//			while (!s.empty() && popV[j] == s.top()) {
//				s.pop();
//				j++;
//			}
//		}
//		if (!s.empty())
//			return false;
//		return true;
//	}
//};
//
//int main() {
//
//	vector<int> arr;
//	arr.push_back(1);
//	arr.push_back(2);
//	arr.push_back(3);
//	arr.push_back(4);
//	arr.push_back(5);
//
//	vector<int> arr1;
//	arr1.push_back(4);
//	arr1.push_back(5);
//	arr1.push_back(3);
//	arr1.push_back(2);
//	arr1.push_back(1);
//
//
//	int a = Solution::IsPopOrder(arr,arr1);
//	cout << a;
//	return 0;
//}


//int find_first_alone_str(string& s)
//{
//	int count = 0;
//	for (int i = 0; i < s.size(); ++i)
//	{
//		count = 0;
//		for (int j = 0; j < s.size(); ++j)
//		{
//			if (s[i] == s[j])
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//int main() {
//	char str[100] = "";
//	cin >> str;
//	string s(str);  //
//	int a = find_first_alone_str(s);
//
//	if (a == -1)
//		cout << a << endl;
//	else
//		cout << s[a] << endl;
//
//	return 0;
//}




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
*/
//
//void Display(const Person & p, const Student & s)
//{
//}
