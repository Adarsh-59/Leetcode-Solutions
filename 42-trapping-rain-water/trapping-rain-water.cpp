class Solution {
public:
    int trap(vector<int>& heights) {
        int n = heights.size();

        vector<int> maxFromLeft(n), maxFromRight(n);
        maxFromLeft[0] = heights[0];
        maxFromRight[n-1] = heights[n-1];

        for(int i=1 ; i<n ; i++){
            maxFromLeft[i] = max(maxFromLeft[i-1], heights[i]);
            maxFromRight[n-1-i] = max(maxFromRight[n-i], heights[n-i-1]);
        }

        int trappedWater = 0;
        for(int i=1 ; i<n-1 ; i++){
            if(heights[i] < maxFromLeft[i] && heights[i] < maxFromRight[i]){
                trappedWater += min(maxFromLeft[i], maxFromRight[i]) - heights[i];
            }
        }

        return trappedWater;
    }
};