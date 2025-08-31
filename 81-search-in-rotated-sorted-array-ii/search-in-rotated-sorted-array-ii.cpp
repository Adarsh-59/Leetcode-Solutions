class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int st, en, mid, n, M = INT_MIN;

        n = nums.size();
        
        en = n-1;
        for(int i=0 ; i<n-1 ; i++){
            if(nums[i] > nums[i+1]){
                en = i;
            }
        }

        st = (en+1)%n;
        cout << st <<" "<< en;

        if(n==1){
            if(target == nums[0]){
                return 1;
            }
            else{
                return 0;
            }
        }
        else{
            while(st != en){
                if(st<en){
                    mid = (st+en)/2;
                }
                else{
                    mid = ((st+en+n)/2)%n;
                }

                if(target == nums[mid]){
                    return 1;
                }
                else if(target == nums[st]){
                    return 1;
                }
                else if(target == nums[en]){
                    return 1;
                }
                else if(target < nums[st]){
                    return 0;
                }
                else if(target > nums[en]){
                    return 0;
                }
                else if(target < nums[mid]){
                    if(mid == 0){
                        en = n-1;
                    }
                    else{
                        en = mid-1;
                    }
                }
                else{
                    if(mid == n-1){
                        st = 0;
                    }
                    else{
                        st = mid+1;
                    }
                }

            }
            return 0;
        }
    }
};