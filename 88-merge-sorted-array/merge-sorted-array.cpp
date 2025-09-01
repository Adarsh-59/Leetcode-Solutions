class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int l, r;
        r = nums1.size()-1;
        l = r-n;

        while(l>=0){
            swap(nums1[l], nums1[r]);
            l--;
            r--;
        }

        int p1 = n, p2 = 0;
        int i = 0;

        while(p2 < n){
            if(p1 < m+n && (nums1[p1] <= nums2[p2])){
                swap(nums1[i], nums1[p1]);
                i++;
                p1++;
            }
            else{
                nums1[i] = nums2[p2];
                i++;
                p2++;
            }
        }
    }
};