class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<1){
            return 0;
        }

        int cnt = 0;
        int i;
        for(i=1 ; i<=n ; i = i<<1){
            if(i&n){
                break;
            }
        }

        if(i == n){
            return 1;
        }
        return 0;
        
    }
};