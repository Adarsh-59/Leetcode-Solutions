class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l, r, m;
        l = 0;
        r = nums.size()-1;
        
        while(l <= r){
            if(target == nums[l]){
                return l;
            }
            else if(target == nums[r]){
                return r;
            }
            else if(target < nums[l]){
                return l;
            }
            else if(target > nums[r]){
                return (r+1);
            }
            else{
                l++;
                r--;
            }
        }
        return l;
    }
};