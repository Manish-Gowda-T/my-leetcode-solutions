class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int j=0 ; j < n; j++){
            if(nums[j] != val){
                nums[i]=nums[j];
                i++;
            }
        }
        return i;
    }
};