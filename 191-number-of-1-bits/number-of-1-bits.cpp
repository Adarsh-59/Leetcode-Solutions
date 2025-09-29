class Solution {
public:
    int hammingWeight(uint32_t n) {
        uint32_t m=1;
        int ans=0;

        for(int d=0 ; d<32 ; d++){
            if(m & n){
                ans++;
            }

            m = m<< 1;
        }

        return ans;
    }
};