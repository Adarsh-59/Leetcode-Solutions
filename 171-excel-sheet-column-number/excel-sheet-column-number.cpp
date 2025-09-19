class Solution {
public:
    int titleToNumber(string columnTitle) {
        int len, col;

        len = size(columnTitle);
        col = 0;

        for(int i=len-1 ; i>=0 ; i--){
            col += (columnTitle[i]-'A'+1)*pow(26, len-1-i);
        }

        return col;
    }
};