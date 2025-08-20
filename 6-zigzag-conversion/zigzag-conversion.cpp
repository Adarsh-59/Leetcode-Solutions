class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> v(numRows, "");

        for(int i=0 ; i<s.size() ; ){
            for(int j=0 ; j<numRows ; j++){
                if(i < s.size()){
                    v[j] += s[i];
                    i++;
                }
            }

            for(int j=numRows-2 ; j>0 ; j--){
                if(i < s.size()){
                    v[j] += s[i];
                    i++;
                }
            }
        }

        string ans="";
        for(int i=0 ; i<v.size() ; i++){
            ans += v[i];
        }

        return ans;
    }
};