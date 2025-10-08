class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        map<int, int> m;
        int n = nums.size();
        n /= 3;

        for(int i=0 ; i<nums.size() ; i++){
            m[nums[i]]++;
        }

        for(auto i:m){
            if(i.second > n){
                ans.push_back(i.first);
            }
        }

        return ans;
    }
};