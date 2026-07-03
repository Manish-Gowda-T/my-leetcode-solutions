class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int curr_val = 0;
        int max_val =INT_MIN;
        int min_val =INT_MAX;
        for(int val1 : nums){
            curr_val += val1;
            max_val =max(curr_val,max_val);
            if(curr_val<0){
                curr_val=0;
            }
        }
        curr_val =0;
        for(int val2: nums){
            curr_val += val2;
            min_val= min(curr_val,min_val);
            if(curr_val>0){
                curr_val=0;
            }
        }
        return max(abs(max_val),abs(min_val));
    }
};