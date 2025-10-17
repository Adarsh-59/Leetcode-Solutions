class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>> v;

        for(int i=0 ; i<board.size() ; i++){
            v.push_back(board[i]);
        }

        for(int i=0 ; i<v.size() ; i++){
            for(int j=0 ; j<v[0].size() ; j++){
                int cnt = 0;
                if(i-1 >= 0){
                    cnt += v[i-1][j];
                    if(j-1 >= 0){
                        cnt += v[i-1][j-1];
                    }
                    if(j+1 < v[0].size()){
                        cnt += v[i-1][j+1];
                    }
                }
                if(i+1 < v.size()){
                    cnt += v[i+1][j];
                    if(j-1 >= 0){
                        cnt += v[i+1][j-1];
                    }
                    if(j+1 < v[0].size()){
                        cnt += v[i+1][j+1];
                    }
                }
                if(j-1 >= 0){
                    cnt += v[i][j-1];
                }
                if(j+1 < v[0].size()){
                    cnt += v[i][j+1];
                }

                cout << cnt << endl;


                if(cnt == 3){
                    board[i][j] = 1;
                }
                else if(cnt < 3){
                    if(cnt < 2){
                        board[i][j] = 0;
                    }
                }
                else{
                    board[i][j] = 0;
                }
            }
        }

    }
};