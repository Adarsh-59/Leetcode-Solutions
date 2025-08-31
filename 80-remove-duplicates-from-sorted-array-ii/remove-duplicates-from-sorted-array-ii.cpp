class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n, cnt, l;
        n = nums.size();
        cnt = 0;
        l = 0;
        for(int i=1 ; i<n ; i++){
            if(nums[i] == nums[l]){
                if(i-l > 1){
                    cnt++;
                    auto it = nums.begin()+i;
                    nums.erase(it);
                    i--;
                    n--;
                }
            }
            else{
                l = i;
            }
        }

        return n;
    }
};