class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int currCnt = 0, lastIdx = n-1;
        int ans = 0;
        for(int l=0, r=0 ; r<=lastIdx ; ){
            cout << currCnt << " " << l << " " << r << endl;
            if(currCnt < 2){
                if(nums[l] == nums[r]){
                    r++;
                    currCnt++;
                }
                else{
                    l = r;
                    currCnt = 0;
                }
            }
            else if(currCnt==2){
                if(nums[l] == nums[r]){
                    int idx = r;

                    while(idx < lastIdx){
                        swap(nums[idx], nums[idx+1]);
                        idx++;
                    }

                    ans++;
                    lastIdx--;
                }
                else{
                    l = r;
                    currCnt = 0;
                }
            }
        }

        cout << endl;
        for(int i=0 ; i<n ; i++){
            cout << nums[i] << " ";
        }
        cout << endl << lastIdx+1;
        return lastIdx+1;
    }
};