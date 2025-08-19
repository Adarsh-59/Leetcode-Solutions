// Developed by Adarsh
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = 1;
        int n = s.size();
        map<char, int> mp;
        int ans = 0;
        int l = 0;
        int r = 1;
        mp[s[0]]++;

        if(n == 0){
            return 0;
        }
        while(l<r && r<n){
            if(mp[s[r]] == 0){
                len++;
            }
            else{
                ans = max(ans, len);
                while(s[l] != s[r]){
                    mp[s[l]]--;
                    len--;
                    l++;
                }
                mp[s[l]]--;
                l++;
            }
            mp[s[r]]++;
            r++;
        }

        ans = max(ans, len);

        return ans;
    }
};