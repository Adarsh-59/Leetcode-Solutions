class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row_size, col_size, row_st, row_en, col_st, col_en, i, j;

        row_size = matrix.size();
        col_size = matrix[0].size();

        row_st = 0;
        col_st = 0;
        row_en = row_size-1;
        col_en = col_size-1;

        vector<int> v = {};

        while((row_st <= row_en) && (col_st <= col_en)){
            // L to R
            if(v.size() < row_size*col_size)
            for(i=col_st ; i<=col_en ; i++){
                v.push_back(matrix[row_st][i]);
            }
            row_st++;

            // U to D
            if(v.size() < row_size*col_size)
            for(i=row_st ; i<=row_en ; i++){
                v.push_back(matrix[i][col_en]);
            }
            col_en--;

            // R to L
            if(v.size() < row_size*col_size)
            for(i=col_en ; i>=col_st ; i--){
                v.push_back(matrix[row_en][i]);
            }
            row_en--;

            if(v.size() < row_size*col_size)
            for(i=row_en ; i>=row_st ; i--){
                v.push_back(matrix[i][col_st]);
            }
            col_st++;
        }

        return v;
    }
};