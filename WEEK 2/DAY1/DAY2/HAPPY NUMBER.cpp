HAPPY NUMBER

class Solution {
public:

    int sum(int n){
        int sm = 0;
        int d;
        while(n>0){
            d = n%10;
            sm = sm + d*d;
            n = n/10;
        }
        return sm;
    }
   
    bool isHappy(int n) {
        int fast = n;
        int slow = n;

        while(fast!=1){
            slow = sum(slow);
            fast = sum(fast);
            fast = sum(fast);
            if(slow == fast && slow!=1){
                return false;
            }
        }
        return true;
    }
};