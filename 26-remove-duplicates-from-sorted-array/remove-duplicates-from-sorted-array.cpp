class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();

        int curr, left, right;
        curr = left = right = 0;

        while(right < n){
            if(nums[left] != nums[right]){
                nums[curr] = nums[left];
                curr++;
                left = right;
            }
            right++;
        }
        nums[curr] = nums[left];

        return curr+1;
    }
};