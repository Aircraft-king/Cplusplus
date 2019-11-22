#include<iostream>
#include<string>
#include<vector>
#include <algorithm> //sort


//https://leetcode-cn.com/problems/kth-largest-element-in-an-array/


class Solution {
public:
	int findKthLargest(vector<int>& nums, int k) {
		sort(nums.begin(), nums.end(), greater<int>());
		for (int i = 0; i < nums.size(); ++i) {
			for (int j = i; j < nums.size(); ++j) {
				if (nums[i] != nums[j]) {
					--k;
				}
				if (k == 1) {
					return nums[j];
				}
			}
		}
		return nums[nums.size() - 1];
	}
};
