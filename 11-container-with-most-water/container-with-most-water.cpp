class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int l = 0, r = n-1;
        int ans = 0;

        while(l < r){
            int dist = r-l;
            int h = min(height[r], height[l]);

            ans = max(ans, h*dist);

            if(height[l] < height[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return ans;
    }
};