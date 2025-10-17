class Solution {
public:
    string getHint(string secret, string guess) {
        map<char, pair<int, int>> m;
        int cnt = 0;
        int cnt1 = 0;

        for(int i=0 ; i<secret.size() ; i++){
            m[secret[i]].first++;
            m[guess[i]].second++;
        }

        for(auto i : m){
            if(i.second.second){
                cnt += min(i.second.first, i.second.second);
            }
        }

        for(int i=0 ; i<secret.size() ; i++){
            if(secret[i] == guess[i]){
                cnt--;
                cnt1++;
            }
        }

        string ans = "";
        ans += to_string(cnt1);
        ans += 'A';
        ans += to_string(cnt);
        ans += 'B';

        return ans;
    }
};