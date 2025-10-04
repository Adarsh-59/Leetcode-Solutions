class Solution {
public:
    bool isHappy(int n) {
        if(n < 10){
            if(n == 1 || n == 7){
                return true;
            }
            else{
                return false;
            }
        }
        else{
            int sum = 0;
            while(n){
                int r = n%10;
                sum += r*r;
                n/=10;
            }

            return isHappy(sum);
        }
    }
};