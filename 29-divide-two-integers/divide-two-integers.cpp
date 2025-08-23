class Solution {
public:
    int divide(int dividend, int divisor) {
        long int dd, dr;
        dd = dividend;
        dr = divisor;
        
        if(dd/dr > INT_MAX){
            return INT_MAX;
        }
        else{
            return dd/dr;
        }
    }
};