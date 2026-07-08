class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> ans=nums;
        sort(ans.begin(),ans.end());
        for(int k=0; k <nums.size(); k++){
        vector <int> temp=nums; 
        k=k%nums.size();
        reverse(temp.begin(), temp.end());
        reverse(temp.begin(), temp.begin() + k);
        reverse(temp.begin() + k, temp.end());
        if(temp==ans){
            return true;
        }
      }
      return false;  
    }
};