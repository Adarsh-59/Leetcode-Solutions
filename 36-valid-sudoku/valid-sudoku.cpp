class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& a) {
        for(int i=0 ; i<9 ; i++){
            for(int j=0 ; j<9 ; j++){
                if(a[i][j] != '.'){
                    for(int k=0 ; k<9 ; k++){
                        if(k!=j && a[i][k] == a[i][j]){
                            cout << i << " " << k << endl;
                            return 0;
                        }
                    }

                    for(int k=0 ; k<9 ; k++){
                        if(k!=i && a[k][j] == a[i][j]){
                            cout << k << " " << j << endl;
                            return 0;
                        }
                    }

                    int ii, jj;
                    ii = i/3;
                    jj = j/3;

                    for(int k=ii*3 ; k<(ii+1)*3 ; k++){
                        for(int m=jj*3 ; m<(jj+1)*3 ; m++){
                            if(i!=k && j!=m && a[i][j] == a[k][m]){
                                cout << k << " " << m << endl;
                                return 0;
                            }
                        }
                    }
                }
            }
        }

        return 1;
    }
};