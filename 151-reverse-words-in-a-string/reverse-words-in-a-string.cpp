class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;


        string str = "";
        for(int i=0 ; i<s.size() ; i++){
            if(s[i] != ' '){
                str += s[i];
            }
            else{
                if(str != ""){
                    v.push_back(str);
                    str = "";
                }
            }
            
        }
        if(str.size()){
            v.push_back(str);
        }

        string ans = "";
        for(int i=v.size()-1 ; i>=0 ; i--){
            string str = v[i];
            ans += str;

            if(i){
                ans += " ";
            }
        }

        return ans;
    }
};