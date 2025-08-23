class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = "";
        int m = INT_MAX;

        for(int i=0 ; i<strs.size() ; i++){
            if(strs[i].size() < m){
                m = strs[i].size();
            }
        }

        for(int i=0 ; i<m ; i++){
            char c = strs[0][i];
            for(int j=1 ; j<strs.size() ; j++){
                if(strs[j][i] != c){
                    return s;
                }
            }
            s = s + c;
        }
        return s;
    }
};