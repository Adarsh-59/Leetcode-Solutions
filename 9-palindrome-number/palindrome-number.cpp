class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return 0;
        }

        int n = x;
        int rev = 0;

        while(n){
            if((long)rev*10 > INT_MAX){
                return 0;
            }
            rev*=10;
            rev+=(n%10);
            n/=10; 
        }

        if(x == rev){
            return 1;
        }
        return 0;
    }
};