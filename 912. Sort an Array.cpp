/*
Given an array of integers nums, sort the array in ascending order.
*/
class Solution {
public:
	vector<int> sortArray(vector<int>& nums) {
		qsort(nums, 0, nums.size() - 1);
		return nums;
	}

	void qsort(vector<int>& a, int left, int right) {
		int l = left;
		int r = right;
		int piv = (a[l] + a[(l + r) / 2] + a[r]) / 3;
		while (l <= r)
		{
			while (a[l] < piv)
				l++;
			while (a[r] > piv)
				r--;
			if (l <= r)
				swap(a[l++], a[r--]);
		}
		if (left < r)
			qsort(a, left, r);
		if (right > l)
			qsort(a, l, right);
	}
};
