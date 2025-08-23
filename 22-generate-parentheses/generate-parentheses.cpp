class Solution {
public:
    vector<string> ans;

    void genPar(int n, int open ,int close, string s){
        if(open == close && open == n){
            ans.push_back(s);
            return;
        }

        if(open == n){
            genPar(n, open, close+1, s+")");
        }
        else{
            if(open > close){
                genPar(n, open, close+1, s+")");
            }
            genPar(n, open+1, close, s+"(");
        }
    }

    vector<string> generateParenthesis(int n) {
        string s = "";
        genPar(n, 0, 0, s);
        return ans;
    }
};