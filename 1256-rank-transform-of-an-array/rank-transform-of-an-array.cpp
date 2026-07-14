class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int, int> mp;
        vector<int> sorted_array(arr);
        sort(sorted_array.begin(), sorted_array.end());
        int r = 1;
        for (int num : sorted_array) {
            if (mp.count(num) == 0) {
                mp[num] = r;
                r++;
            }
        }
        for (int i = 0; i < arr.size(); i++) {
            arr[i] = mp[arr[i]];
        }
        return arr;
    }
};