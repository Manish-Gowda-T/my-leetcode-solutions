class Solution {
public:
    bool isHappy(int n) {
        set <int> st;
        while(n != 1){
            int sum=0;
            while( n >0){
            int ld= n %10;
            sum += pow(ld,2);
            n /= 10;
            }
            if(st.count(sum)){
                return false;
            }
            st.insert(sum);
            n=sum;
        }
        return true ;
    }
};