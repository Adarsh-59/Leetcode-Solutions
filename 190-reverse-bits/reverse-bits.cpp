class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        vector<int> v(32, 0);

        for(int i=0 ; i<32 ; i++){
            if(1<<i & n){
                v[31-i] = 1;
            }
        }

        uint32_t ans = 0;
        double p;
        for(int i=0 ; i<32 ; i++){
            if(v[i]){
                p = pow(2, i);
                ans += p;
            }
        }

        return ans;
    }
};