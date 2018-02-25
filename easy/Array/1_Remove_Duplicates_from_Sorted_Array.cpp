class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		if (nums.size() < 2) return nums.size();
		int len = nums.size();
		for (int i = 1; i < len; i++) {
			if (nums[i] == nums[i - 1]) {
				for (int j = i; j < len - 1; j++) nums[j] = nums[j + 1];
				len--;
				i--;
			}
		}
		return len;
	}
};