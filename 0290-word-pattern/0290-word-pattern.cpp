class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> v;
        string str = "";

        for(int i=0 ; i<s.size(); i++){

            if(s[i] != ' '){
                str += s[i];
            }
            else{
                v.push_back(str);
                str = "";
            }
        }
        v.push_back(str);

        if(v.size() != pattern.size()){
            return 0;
        }

        map<char, string> m;
        bool flag1 = 1;
        for(int i=0 ; i<pattern.size() ; i++){
            if(!i){
                m[pattern[i]] = v[i];
            }
            else{
                if(m.find(pattern[i]) == m.end()){
                    m[pattern[i]] = v[i];
                }
                else{
                    if(v[i] != m[pattern[i]]){
                        flag1 = 0;
                        break;
                    }
                }
            }
        }

        map<string, char> m1;
        bool flag2 = 1;
        for(int i=0 ; i<v.size() ; i++){
            if(!i){
                m1[v[i]] = pattern[i];
            }
            else{
                if(m1.find(v[i]) == m1.end()){
                    m1[v[i]] = pattern[i];
                }
                else{
                    if(pattern[i] != m1[v[i]]){
                        flag2 = 0;
                        break;
                    }
                }
            }
        }
        return flag1&flag2;
    }
};