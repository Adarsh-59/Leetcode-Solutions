class Solution {
public:
    string convertToTitle(int columnNumber) {
        int rem;
        string s = "";

        while(columnNumber){
            rem = columnNumber % 26;
            if(rem != 0){
                s = char('A' + rem - 1) + s;            
                columnNumber /= 26;
            }
            else{
                s = char('Z') + s;
                columnNumber /= 26;
                columnNumber--;
            }
        }

        return s;
    }
};