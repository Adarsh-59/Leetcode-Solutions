class Solution {
public:
    double myPow(double x, int n) {
        double prod = 1;

        if(x == 1 || x == 0){
            return x;
        }
        else if(x == -1){
            if(n%2 == 0){
                return 1;
            }
            else{
                return -1;
            }
        }
        else{
            if(n>=0){
                while(n%2 == 0 && n){
                    x *= x;
                    n/=2;
                }

                while(n){
                    prod *= x;
                    n--;
                }
            }
        
            else{
                while(n%2 == 0 && n){
                    x *= x;
                    n/=2;
                }

                while(n){
                    prod /= x;
                    n++;
                }
            }
        }

        return prod;
    }
};