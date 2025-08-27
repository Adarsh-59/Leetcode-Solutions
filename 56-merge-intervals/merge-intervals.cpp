class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        int n = arr.size();

        sort(arr.begin(), arr.end());
        int start = arr[0][0];
        int end = arr[0][1];
        vector<int> v(2);

        vector<vector<int>> ans;
        for(int i=1 ; i<n ; i++){
            if(arr[i][0] > end){
                v[0] = start;
                v[1] = end;
                ans.push_back(v);
                start = arr[i][0];
                end = arr[i][1];
            }
            else{
                end = max(end, arr[i][1]);
            }
        }
        v[0] = start;
        v[1] = end;

        ans.push_back(v);

        return ans;
    }
};