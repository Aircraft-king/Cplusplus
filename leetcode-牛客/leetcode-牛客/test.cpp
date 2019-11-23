#include<iostream>
#include<string>
#include<vector>
#include <algorithm> //sort


//https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array/submissions/
class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		if (nums.size() > 1) {
			for (int i = 0; i < nums.size() - 1; i++) {
				vector<int>::iterator it = nums.begin() + i + 1;
				for (int j = i + 1; j < nums.size(); ++j) {
					if (nums[i] == nums[j]) {
						it = nums.erase(it);
						j--;
					}
				}
			}
		}

		return nums.size();
	}
};





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
