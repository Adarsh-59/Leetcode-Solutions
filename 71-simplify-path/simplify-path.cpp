class Solution {
public:
    string simplifyPath(string path) {
        vector<string> v;
        string s = "";
        
        for(int i=0 ; i<path.size() ; i++){
            if(path[i] == '/'){
                if(s == ".."){
                    if(v.size()){
                        v.pop_back();
                    }
                }
                else if(s == "."){
                    s = "";
                    continue;
                }
                else if(s == ""){
                    continue;
                }
                else{
                    v.push_back(s);
                }
                s = "";
            }
            else{
                s += path[i];
            }
        }
        if(s == ".."){
            if(v.size()){
                v.pop_back();
            }
        }
        else if(s == "."){
            s = "";
        }
        else if(s == ""){
        }
        else{
            v.push_back(s);
        }

        string ans = "";

        if(v.size()){
            for(int i=0 ; i<v.size() ; i++){
                ans += "/";
                ans += v[i];
            }
        }
        else{
            return "/";
        }

        return ans;
    }
};