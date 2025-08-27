class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> v(nums.size(), 0);
        v[0] = nums[0]; 

        int max = v[0];
        for (int i = 1; i < nums.size(); i++) {
            v[i] = nums[i] + (v[i - 1] > 0 ? v[i - 1] : 0);
            if (v[i] > max) {
                max = v[i];
            }
        }

        return max;
    }
};