class Solution {
public:
    void dfs(int m, int n,  pair<int, int> p, vector<vector<int>>& vis, vector<vector<char>>& grid){
        int i = p.first;
        int j = p.second;
        vis[i][j] = 1;

        if(i+1<m && grid[i+1][j] == '1' && !vis[i+1][j]){
            dfs(m, n, make_pair(i+1, j), vis, grid);
        }
        if(j+1<n && grid[i][j+1] == '1' && !vis[i][j+1]){
            dfs(m, n, make_pair(i, j+1), vis, grid);
        }
        if(i-1>=0 && grid[i-1][j] == '1' && !vis[i-1][j]){
            dfs(m, n, make_pair(i-1, j), vis, grid);
        }
        if(j-1>=0 && grid[i][j-1] == '1' && !vis[i][j-1]){
            dfs(m, n, make_pair(i, j-1), vis, grid);
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<pair<int, int>> v;
        vector<vector<int>> vis(m, vector<int>(n, 0));

        for(int i=0 ; i<m ; i++){
            for(int j=0 ; j<n ; j++){
                if(grid[i][j] == '1'){
                    v.push_back(make_pair(i, j));
                }
            }
        }

        int cnt = 0;

        for(auto a:v){
            int i = a.first;
            int j = a.second;

            if(vis[i][j] == 0){
                dfs(m, n, make_pair(i, j), vis, grid);
                cnt++;
            }
        }

        return cnt;

    }
};