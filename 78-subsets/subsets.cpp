class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> a;
        vector<int> t;
        int n, i, j, x;

        n = nums.size();

        for(i=0 ; i<pow(2,n) ; i++){
            t = {};
            for(j=0 ; j<n ; j++){
                x = (i & 1<<j);
                if(x != 0){
                    t.push_back(nums[j]);
                }
            }
            a.push_back(t);
        }

        return a;
    }
};