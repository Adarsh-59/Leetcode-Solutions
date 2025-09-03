class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        map<int, int> numIdx;
        int idx = 0;

        for(int i=0, j=0 ; i<m || j<n ; ){
            if(i<m && j<n){
                if(nums1[i] <= nums2[j]){
                    numIdx[idx] = nums1[i];
                    idx++;
                    i++;
                }
                else{
                    numIdx[idx] = nums2[j];
                    idx++;
                    j++;
                }
            }
            else if(i==m && j<n){
                numIdx[idx] = nums2[j];
                idx++;
                j++;
            }
            else if(j == n && i<m){
                numIdx[idx] = nums1[i];
                idx++;
                i++;
            }
        }

        for(auto i: numIdx){
            nums1[i.first] = i.second;
        }
    }
};