class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n = points.size();
        vector<vector<int>> ans;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;

        for(int i=0 ; i<n ; i++){
            int dist = points[i][0]*points[i][0] + points[i][1]*points[i][1];

            minHeap.push({dist, i});
        } 

        for(int i=0 ; i<k ; i++){
            pair<int, int> distIdx = minHeap.top();
            minHeap.pop();

            ans.push_back(points[distIdx.second]); 
        }

        return ans;
    }
};