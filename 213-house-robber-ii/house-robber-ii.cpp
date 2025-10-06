class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp1(n, 0), dp2(n, 0);
        int ans = 0;

        if(n <= 3){
            for(int i=0 ; i<n ; i++){
                ans = max(ans, nums[i]);
            }

            return ans;
        }

        dp1[0] = nums[0];
        dp2[1] = nums[1];

        for(int i=0 ; i<n-1 ; i++){
            if(i-2 >= 0){
                if(i-3 >= 0){
                    dp1[i] = nums[i] + max(dp1[i-2], dp1[i-3]);
                }
                else{
                    dp1[i] = nums[i] + dp1[i-2];
                }
            }
        }

        dp2[1] = nums[1];
        dp2[2] = nums[2];
        for(int i=1 ; i<n ; i++){
            if(i-2 >= 1){
                if(i-3 >= 1){
                    dp2[i] = nums[i] + max(dp2[i-2], dp2[i-3]);
                }
                else{
                    dp2[i] = nums[i] + dp2[i-2];
                }
            }
        }

        for(int i=0 ; i<n ; i++){
            ans = max(ans, max(dp1[i], dp2[i]));
        }

        return ans;
    }
};