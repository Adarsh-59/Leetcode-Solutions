class Solution {
public:
    void f(int idx, int n, int sum, int target, vector<int> temp, vector<int> candidates, vector<vector<int>>& ans){
        if(idx == n) return;
        if(sum > target) return;

        if(sum == target){
            ans.push_back(temp);
            return;
        }

        temp.push_back(candidates[idx]);
        sum += candidates[idx];
        f(idx, n, sum, target, temp, candidates, ans);

        temp.pop_back();
        sum -= candidates[idx];
        f(idx+1, n, sum, target, temp, candidates, ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        int n = candidates.size();
        sort(candidates.begin(), candidates.end());

        f(0, n, 0, target, temp, candidates, ans); // idx, size, sum, target, ds, candidates, ans

        return ans;
    }
};