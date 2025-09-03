class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;
        k = n - k;
        vector<int> v;

        while(v.size() != n){
            v.push_back(nums[k%n]);
            k++;
        }

        for(int i=0 ; i<n ; i++){
            nums[i] = v[i];
        }
    }
};