class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int> v(n, 1);

        for(int i=0 ; i<n-1 ; i++){
            if(ratings[i] < ratings[i+1]){
                v[i+1] = v[i] + 1;
            }
        }

        for(int i=n-1 ; i>0 ; i--){
            if(ratings[i-1] > ratings[i]){
                if(v[i-1] <= v[i]){
                    v[i-1] = v[i] + 1;
                }
            }
        }
        int candies = 0;
        for(int i=0 ; i<n ; i++){
            candies += v[i];
        }
        return candies;
    }
};