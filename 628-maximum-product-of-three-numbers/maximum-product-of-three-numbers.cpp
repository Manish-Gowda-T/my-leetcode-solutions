class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int first_largest = INT_MIN;
        int second_largest = INT_MIN;
        int third_largest = INT_MIN;

        int smallest = INT_MAX;
        int second_smallest = INT_MAX;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > first_largest) {
                third_largest = second_largest;
                second_largest = first_largest;
                first_largest = nums[i];
            } else if (nums[i] > second_largest) {
                third_largest = second_largest;
                second_largest = nums[i];
            } else if (nums[i] > third_largest) {
                third_largest = nums[i];
            }

            // smallest
            if (nums[i] < smallest) {
                second_smallest = smallest;
                smallest = nums[i];
            } else if (nums[i] < second_smallest) {
                second_smallest = nums[i];
            }
        }
        return max(first_largest * second_largest * third_largest,
                   first_largest * smallest * second_smallest);
    }
};