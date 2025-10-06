class Solution {
public:
    void f(int idx, int k, int n, int target, vector<int> temp, vector<vector<int>>& ans){
        if(target == 0){
            if(k == 0){
                ans.push_back(temp);
                return;
            }
        }
        else if(target < 0){
            return;
        }
        else{
            if(k == 0){
                return;
            }
            for(int i=idx ; i<=n ; i++){
                temp.push_back(i);
                f(i+1, k-1, n, target-(i), temp, ans);
                temp.pop_back();
            }
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> temp;
        vector<vector<int>> ans;

        f(1, k, 9, n, temp, ans); //idx, k, target, temp, ans

        return ans;
    }
};