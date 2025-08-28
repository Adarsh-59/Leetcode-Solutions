class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n,0));
        
        int row_size, col_size, row_st, row_en, col_st, col_en, i, j;

        row_size = n;
        col_size = n;

        row_st = 0;
        col_st = 0;
        row_en = row_size-1;
        col_en = col_size-1;
        j = 1;

        while((row_st <= row_en) && (col_st <= col_en)){
            // L to R
            if(j <= row_size*col_size)
            for(i=col_st ; i<=col_en ; i++){
                matrix[row_st][i] = j;
                j++;
            }
            row_st++;

            // U to D
            if(j <= row_size*col_size)
            for(i=row_st ; i<=row_en ; i++){
                matrix[i][col_en] = j;
                j++;
            }
            col_en--;

            // R to L
            if(j <= row_size*col_size)
            for(i=col_en ; i>=col_st ; i--){
                matrix[row_en][i] = j;
                j++;
            }
            row_en--;

            if(j <= row_size*col_size)
            for(i=row_en ; i>=row_st ; i--){
                matrix[i][col_st] = j;
                j++;
            }
            col_st++;
        }

        return matrix;
    }
};