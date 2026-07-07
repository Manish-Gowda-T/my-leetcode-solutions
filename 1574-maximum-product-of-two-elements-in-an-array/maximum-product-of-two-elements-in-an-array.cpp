class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int largest=nums[0];
        int second_largest=INT_MIN;
        int n=nums.size();
        for(int i=1 ; i < n ; i++){
            if(nums[i] > largest){
                second_largest=largest;
                largest=nums[i];
            }
            else if(nums[i] < largest && nums[i] > second_largest){
                second_largest=nums[i];
            }
            else if(nums[i]==largest){
                second_largest=nums[i];
            }
        }
        return ((largest-1)*(second_largest-1));
    }
};