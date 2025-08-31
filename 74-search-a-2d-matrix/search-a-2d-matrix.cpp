class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i, j, st, en, mid, m, n, row;

        m = matrix.size();
        n = matrix[0].size();
        st = 0;
        en = m-1;
        
        bool flag = 0;

        if(en == 0){
            row = 0;
            flag = 1;
        }
        else{
            while(st <= en){
                mid = (st+en)/2;
                if(target >= matrix[st][0] && target <= matrix[st][n-1]){
                    row = st;
                    flag = 1;
                    break;
                }
                else if(target >= matrix[mid][0] && target <= matrix[mid][n-1]){
                    row = mid;
                    flag = 1;
                    break;
                }
                else if(target >= matrix[en][0]){
                    row = en;
                    flag = 1;
                    break;
                }
                else{
                    if(target < matrix[mid][0]){
                        en = mid-1;
                    }
                    else{
                        if(st != mid){
                            st = mid;
                        }
                        else{
                            st = mid+1;
                        }
                   }
                }
            }
        }

        if(flag == 0){
            cout << "1";
            return 0;
        }
        else{
            st = 0;
            en = n-1;

            if(en == 0){
                if(matrix[row][0] == target){
                    return 1;
                }
                else{
                    return 0;
                }
            }
            else{
                while(st <= en){
                    mid = (st+en)/2;

                    if(target == matrix[row][mid]){
                        cout << "2";
                        return 1;
                    }
                    else if(target < matrix[row][mid]){
                        en = mid-1;
                    }
                    else{
                        st = mid+1;
                    }
                }
                cout << "3";
                return 0;
            }
        }
    }
};