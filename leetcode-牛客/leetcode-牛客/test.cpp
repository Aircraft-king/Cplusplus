#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<deque>
#include <algorithm> //sort
using namespace std;

//https://leetcode-cn.com/problems/implement-stack-using-queues/
class MyStack {
public:
	/** Initialize your data structure here. */
	deque<int> q1;
	MyStack() {

	}

	/** Push element x onto stack. */
	void push(int x) {
		q1.push_back(x);

	}

	/** Removes the element on top of the stack and returns that element. */
	int pop() {
		if (!q1.empty()) {
			int a = top();
			q1.pop_back();
			return a;
		}
		return -1;
	}

	/** Get the top element. */
	int top() {
		if (!q1.empty())
			return q1[q1.size() - 1];
		return -1;
	}

	/** Returns whether the stack is empty. */
	bool empty() {
		if (q1.empty())
			return true;
		return false;
	}
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */



////https://leetcode-cn.com/problems/contains-duplicate-ii/submissions/
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

////https://leetcode-cn.com/problems/contains-duplicate/
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
////https://leetcode-cn.com/problems/reverse-vowels-of-a-string/submissions/
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

////https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array/submissions///
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





////https://leetcode-cn.com/problems/kth-largest-element-in-an-array/
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
