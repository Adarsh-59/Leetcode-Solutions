class Solution {
public:
    int countPrimes(int n) {
        vector<int> v(n, 0);
        int cnt = 0;
        for(int i=2 ; i<n ; i++){
            if(!v[i]){
                v[i] = 1;
                cnt++;

                for(int j=2 ; i*j < n ; j++){
                    v[i*j] = 1;
                }
            }
        }

        return cnt;
    }
};