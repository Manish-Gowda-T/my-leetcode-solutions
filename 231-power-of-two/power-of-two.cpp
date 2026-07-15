class Solution {
public:
    bool isPowerOfTwo(int n) {
        //done by bit Manipulation
        
        if( n > 0 && (n & (n-1))==0){
            return true;
        }
        else{
            return false;
        }
    }
};