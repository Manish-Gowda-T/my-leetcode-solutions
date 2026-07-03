class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current_sum = 0;
        int maximum_sum = INT_MIN;
        for (int val : nums) {
            current_sum += val;
            maximum_sum = max(current_sum, maximum_sum);
            if (current_sum < 0) {
                current_sum = 0;
            }
        }
        return maximum_sum;
    }
};
