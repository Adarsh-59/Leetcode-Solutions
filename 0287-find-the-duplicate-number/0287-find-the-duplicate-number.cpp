class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i, j;
        vector<int> v(nums.size(), 0);
        for(i=0 ; i<nums.size() ; i++){
            v[nums[i]]++;
        }

        for(i=0 ; i<nums.size() ; i++){
            if(v[i]>1){
                return i;
            }
        }
        return 0;
    }
};