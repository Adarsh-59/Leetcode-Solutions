class Solution {
public:
    int left(vector<int>& nums, int target){
        int l, r, m;
        l = 0;
        r = nums.size()-1;

        
        while(l<=r){
            m = (l+r)/2;
            
            if(nums[l] == target){
                return l;
            }

            if(nums[m] < target){
                l = m+1;
            }
            else if(nums[m] > target){
                r = m-1;
            }
            else{
                if(m==0 || nums[m-1] < target){
                    return m;
                }
                else{
                    r = m;
                }
            }
        }

        return -1;
    }
    int right(vector<int>& nums, int target){
        int l, r, m;
        l = 0;
        r = nums.size()-1;

        while(l<=r){
            m = (l+r)/2;

            if(nums[r] == target){
                return r;
            }

            if(nums[m] < target){
                l = m+1;
            }
            else if(nums[m] > target){
                r = m-1;
            }
            else{
                if(m == nums.size()-1 || nums[m+1] > target){
                    return m;
                }
                else{
                    l = m;
                }
            }
        }

        return -1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;
        v.push_back(left(nums, target));
        v.push_back(right(nums, target));
        
        return v;
    }
};