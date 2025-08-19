class Solution {
public:
    // Adarsh
    vector<int> twoSum(vector<int>& nums, int target) {
        int num_size = nums.size();
        map<int, int> num_idx_map;
        vector<int> ans(2);

        for(int i=0 ; i<num_size ; i++){
            if(num_idx_map.find(target-nums[i]) != num_idx_map.end()){
                ans[0] = num_idx_map[target-nums[i]];
                ans[1] = i;
                break;
            }

            num_idx_map[nums[i]] = i;
        }

        return ans;
    }
};