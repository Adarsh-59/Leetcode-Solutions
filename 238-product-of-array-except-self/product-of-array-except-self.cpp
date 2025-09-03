class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int cntZero = 0;
        int prod = 1;
        vector<int> v(n, 0);

        for(int i=0 ; i<n ; i++){
            if(nums[i] == 0){
                cntZero++;
            }
            else{
                prod *= nums[i];
            }
        }

        if(cntZero > 1){
            return v;
        }
        else if(cntZero == 1){
            for(int i=0 ; i<n ; i++){
                v[i] = nums[i] == 0 ? prod : 0;
            }

            return v;
        }

        for(int i=0 ; i<n ; i++){
            v[i] = prod / nums[i];
        }

        return v;
    }
};