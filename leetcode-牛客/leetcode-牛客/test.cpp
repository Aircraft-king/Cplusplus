//#include<iostream>
//#include<string>
//#include<vector>
//#include<list>
//#include<stack>
//#include<deque>
//#include <algorithm> //sort
using namespace std;

//https://leetcode-cn.com/problems/ugly-number/submissions/

class Solution {
public:
	bool isUgly(int num) {
		if (num == 0) {
			return false;
		}
		while (num != 1) {
			if (num % 2 == 0) {
				num /= 2;
			}
			else if (num % 3 == 0) {
				num /= 3;
			}
			else if (num % 5 == 0) {
				num /= 5;
			}
			else {
				return false;
			}
		}
		return true;
	}
};

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
//https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array/submissions///
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
