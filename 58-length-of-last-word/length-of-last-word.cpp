class Solution {
public:
    int lengthOfLastWord(string s) {
        bool flag = 0;
        int len = 0;

        for(int i=s.size()-1 ; i>=0 ; i--){
            if(s[i] != ' '){
                if(!flag){
                    flag = 1;
                }
                len++;
            }
            else{
                if(flag){
                    return len;
                }
            }
        }
        return len;
    }
};