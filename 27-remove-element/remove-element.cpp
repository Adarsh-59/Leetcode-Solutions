class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l = 0, r = nums.size()-1, cnt = 0;

        while(l<=r){
            if(nums[l] == val){
                if(nums[r] != val){
                    swap(nums[l], nums[r]);
                    cnt++;
                }
                else{
                    l--;
                }
                r--;
            }
            else{
                cnt++;
            }
            l++;
        }

        return cnt;
    }
};