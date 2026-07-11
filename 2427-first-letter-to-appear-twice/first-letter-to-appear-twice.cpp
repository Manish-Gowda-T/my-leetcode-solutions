class Solution {
public:
    char repeatedCharacter(string s) {
        set <char> st;
        for(char num : s){
            if(st.count(num)){
                return num;
            }
            st.insert(num);
        }
        return ' ';
    }
};