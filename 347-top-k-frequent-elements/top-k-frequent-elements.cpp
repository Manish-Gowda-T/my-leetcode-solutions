class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // We first create a map
        unordered_map<int,int> map;
        for(auto num : nums){
            map[num]++;
        }
        // Now we perform bucket sort
        vector<vector<int>> buckets(nums.size() + 1);
        for(auto x : map){
            buckets[x.second].push_back(x.first);
        }
        //Now we iterate back_wards
        vector<int>res;
        for(int i =buckets.size()-1; i >=0 &&res.size() < k; i--){
            for(int num : buckets[i]){
                res.push_back(num);
            }
            if(res.size() == k){
                return res;
            }
        }
        return res;
    }
};