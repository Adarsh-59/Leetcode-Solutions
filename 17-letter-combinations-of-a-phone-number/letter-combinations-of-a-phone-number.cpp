class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> s;
        string s1;

        for(int i=0 ; i<digits.size() ; i++){
            switch(digits[i]){
                case '2':
                s1 = "abc";
                break;

                case '3':
                s1 = "def";
                break;

                case '4':
                s1 = "ghi";
                break;

                case '5':
                s1 = "jkl";
                break;

                case '6':
                s1 = "mno";
                break;

                case '7':
                s1 = "pqrs";
                break;

                case '8':
                s1 = "tuv";
                break;

                case '9':
                s1 = "wxyz";
                break;

                
            }
            s.push_back(s1);
        }

        int n = s.size();
        vector<string> ans = {};
        if(n == 1){
            for(int i=0 ; i<s[0].size() ; i++){
                string temp = "";
                temp += s[0][i];
                ans.push_back(temp);
            }
        }
        else if(n == 2){
            for(int i=0 ; i<s[0].size() ; i++){
                for(int j=0 ; j<s[1].size() ; j++){
                    string temp = "";
                    temp += s[0][i];
                    temp += s[1][j];
                    ans.push_back(temp);
                }
            }
        }
        else if(n == 3){
            for(int i=0 ; i<s[0].size() ; i++){
                for(int j=0 ; j<s[1].size() ; j++){
                    for(int k=0 ; k<s[2].size() ; k++){
                        string temp = "";
                        temp += s[0][i];
                        temp += s[1][j];
                        temp += s[2][k];
                        ans.push_back(temp);
                    }
                }
            }
        }
        else if(n == 4){
            for(int i=0 ; i<s[0].size() ; i++){
                for(int j=0 ; j<s[1].size() ; j++){
                    for(int k=0 ; k<s[2].size() ; k++){
                        for(int l=0 ; l<s[3].size() ; l++){
                            string temp = "";
                            temp += s[0][i];
                            temp += s[1][j];
                            temp += s[2][k];
                            temp += s[3][l];
                            ans.push_back(temp);
                        }
                    }
                }
            }
        }

        return ans;
    }
};