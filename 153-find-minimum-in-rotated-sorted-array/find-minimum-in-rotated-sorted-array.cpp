class Solution {
public:
    int findMin(vector<int>& nums) {
        int i, n, j, st, en, mid;

        n = nums.size();
        st = 0;
        en = n-1;

        while(st <= en){
            mid = (st+en)/2;

            if(nums[st] <= nums[en]){
                return nums[st];
            }
            else{
                if(nums[st] > nums[mid]){
                    st++;
                    en = mid;
                }
                else{
                    st = mid+1;
                }
            }
        }

        return 0;
    }
};