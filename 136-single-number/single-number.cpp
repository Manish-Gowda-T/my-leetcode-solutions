class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // We perform Xor with all elements 
        int ans =0;
        for(int i : nums ){
            ans=ans^i;
        }
        return ans;
    }
};