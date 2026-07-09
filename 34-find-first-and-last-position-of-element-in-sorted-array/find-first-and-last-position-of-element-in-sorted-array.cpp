class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int lb, ub;
        lb = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        if (lb == nums.size() || nums[lb] != target) {
            return {-1, -1};
        }
        ub = upper_bound(nums.begin(), nums.end(), target) - nums.begin() - 1;
        return {lb, ub};
    }
};