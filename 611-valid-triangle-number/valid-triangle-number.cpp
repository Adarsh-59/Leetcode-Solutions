class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int n = nums.size();
        int i, j, k;
        if(n < 3){
            return 0;
        }

        int count = 0;
        sort(nums.begin(), nums.end());
        // for(int i=0 ; i<n ; i++){
        //     cout << nums[i] << " ";
        // }
        cout << endl;


        for(i=0 ; i<n-2 ; i++){
            for(j=i+1, k=i+2 ; k<n ; ){
                if(nums[i]+nums[j] > nums[k]){
                    // cout << nums[i] << " " << nums[j] << " " << nums[k] << endl;
                    k++;
                }
                else{
                    count += (k-j-1);
                    // cout << i << " " << j << " " << k << " " << (k-j-1) << endl;
                    if(j<k && nums[i] + nums[j] <= nums[k]){
                        j++;
                    }
                    if(j == k){
                        k++;
                    }
                }
            }
            
            while(j < n-1){
                count += (k-j-1);
                // cout << i << " " << j << " " << k << " " << (k-j-1) << endl;
                j++;
            }
        }

        return count;
    }
};