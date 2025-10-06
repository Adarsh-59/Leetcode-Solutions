class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int totalSum = 0;

        for(int i=0 ; i<n ; i++){
            totalSum += nums[i];
        }

        if(totalSum < target){
            return 0;
        }
        else if(totalSum == target){
            return n;
        }

        int currSum = 0;
        int left = 0;
        int right = 0;
        int ans = n+1;

        while(right < n){
            if(currSum < target){
                currSum += nums[right];
                right++;
            }
            else{
                ans = min(ans, right-left);
                currSum -= nums[left];
                left++;
            }
        }
        while(left < n){
            if(currSum >= target){
                ans = min(ans, right-left);
                currSum -= nums[left];
                left++;
            }
            else{
                break;
            }
        }

        return ans;
    }
};