class Solution {
public:
    string countAndSay(int n) {
        if(n == 1){
            return "1";
        }

        string s, ans;
        s = countAndSay(n-1) + "0";
        ans = "";

        int last = -1;
        for(int i=0 ; i<s.size()-1 ; i++){
            int count;
            
            if(s[i] != s[i+1]){
                count = i-last;
                last = i;
                ans += to_string(count);
                ans += s[i];
            }

            
        }

        return ans;
    }
};