class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int l = 0, r = 1;

        for(int i=0 ; i<n ; i++){
            if(nums[0]  == 0){
                l = i;
                break;
            }
        }
        r = l+1;

        while(l < n && r < n){
            if(nums[l] == 0){
                while(r<n && nums[r] == 0){
                    r++;
                }
                if(r >= n){
                    break;
                }

                if(r < n){    
                    swap(nums[l], nums[r]);
                    l++;
                    r++;
                }
            }
            else{
                l++;
                r++;
            }
        }

    }
};