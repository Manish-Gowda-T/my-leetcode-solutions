class Solution {
public:
    bool isPalindrome(int x) {
        int original =x;
        long revnum=0;
        if(x <0){
            return false;
        }
        if(x==0){
            return true;
        }
        while(x > 0){
            int ld = x%10;
            revnum=(revnum*10)+ld;
            x /=10;
        }
        if(revnum == original){
            return true;
        }
        else{
            return false;
        }
    }
};