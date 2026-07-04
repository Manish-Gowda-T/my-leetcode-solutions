class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int> mp1;
        unordered_map<int,int> mp2;
        for(int num : s){
            mp1[num]++;
        }
        for(int num : t){
            mp2[num]++;
        }
        if(mp1==mp2) return true;
        else return false;
    }
};