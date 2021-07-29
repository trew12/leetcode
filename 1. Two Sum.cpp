/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> val_to_ind;
        for (int i = 0; i < nums.size(); i++){
            int diff = target - nums[i];
            if (val_to_ind.count(diff) > 0){
                return vector<int> {i, val_to_ind[diff]};
            }
            val_to_ind.insert({nums[i], i});
        }
        return vector<int> {};
    }
};
