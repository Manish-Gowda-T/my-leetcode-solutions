class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int satisfied=0,greed_pointer=0,cookie_pointer=0;
        while(cookie_pointer < s.size() && greed_pointer < g.size()){
            if(s[cookie_pointer]  >=  g[greed_pointer]){
                satisfied++;
                cookie_pointer++;
                greed_pointer++;
            }
            else{
                cookie_pointer++;
            }
        }
        return satisfied;
    }
};