class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> ransom;
        unordered_map<char,int> mag;
        for(int num : magazine){
            mag[num]++;
        }
        for(int nums : ransomNote){
            mag[nums]--;
            if(mag[nums] < 0){
                return false;
            }
        }
        return true;
    }
};