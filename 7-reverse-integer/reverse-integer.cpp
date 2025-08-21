class Solution {
public:
    int reverse(int x) {
        long long n = abs((long long)x);
        int rev = 0;

        while(n){
            if((long)rev*10 > INT_MAX){
                return 0;
            }
            rev *= 10;
            rev += (n%10);
            n/=10;
        }

        if(x >= 0){
            return rev;
        }
        else{
            return rev*(-1);
        } 
        return 0;
    }
};