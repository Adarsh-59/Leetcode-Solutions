class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& Grid) {
        int m = Grid.size();
        int n = Grid[0].size();

        if(Grid[0][0] || Grid[m-1][n-1]){
            return 0;
        }

        for(int i=0 ; i<m ; i++){
            for(int j=0 ; j<n ; j++){
                if(Grid[i][j]){
                    Grid[i][j] = -1;
                }
            }
        }

        Grid[0][0] = 1;

        for(int i=0 ; i<m ; i++){
            for(int j=0 ; j<n ; j++){
                if(!Grid[i][j]){
                    if(i-1>=0 && Grid[i-1][j]!=-1){
                        Grid[i][j] += Grid[i-1][j];
                    }
                    if(j-1>=0 && Grid[i][j-1]!=-1){
                        Grid[i][j] += Grid[i][j-1];
                    }
                }
            }
        }

        return Grid[m-1][n-1];
    }
};