class Solution {
public:
	int maxProduct(vector<int> nums) {
		int n = nums.size();
		if (n == 0)
			return 0;
		if (n == 1)
			return nums[0];

		int res = nums[0];

		int imin = nums[0];
		int imax = nums[0];

		for (int i = 1; i < n; i++)
		{
			if (nums[i] < 0)
				swap(imin, imax);

			imin = min(nums[i], imin*nums[i]);
			imax = max(nums[i], imax*nums[i]);

			res = max(res, imax);
		}

		return res;
	}
};
