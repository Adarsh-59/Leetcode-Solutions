class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();


        vector<vector<int>> dp(m, vector<int>(n, -1));
        dp[0][0] = grid[0][0];

        for(int i=0 ; i<m;  i++){
            for(int j=0 ; j<n ; j++){
                if(dp[i][j] == -1){
                    int top = INT_MAX, left = INT_MAX;
                    if(i-1 >= 0){
                        top = dp[i-1][j];
                    }
                    if(j-1 >= 0){
                        left = dp[i][j-1];
                    }
                    dp[i][j] = grid[i][j] + min(top, left);
                }
            }
        }

        return dp[m-1][n-1];
    }
};