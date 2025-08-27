class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, 0);
        dp[n-1] = 1;
        int last = n-1;

        for(int i=0 ; i<n-1 ; i++){
            int idx = n-2-i;
            if(nums[idx] >= last-(idx)){
                last = idx;

            }
        }

        if(last == 0){
            return true;
        }
        return false;
    }
};