class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        //we keep track of 5 and 10 dollar bills 
        int five_dollars=0;
        int ten_dollars=0;
        for(int bill : bills){
            if(bill == 5){
                five_dollars++;
            }
            else if(bill == 10){
                ten_dollars++;
                five_dollars--;
            }
            else{
                //choose either 2 5$ or 1 10$ & 1 5$
                if(ten_dollars > 0){
                    ten_dollars--;
                    five_dollars--;
                }
                else{
                    five_dollars -=3;
                }
            }
            if( five_dollars < 0){
                return false;
            } 
        }
        return true;
    }
};