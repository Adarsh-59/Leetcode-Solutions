class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        int cnt = 1;
        while(n){
            if(n & 1){
                ans.push_back(0);
            }
            else{
                ans.push_back(cnt);
                ans.push_back(-1*cnt);
                cnt++;
                n--;
            }
            n--;
        }

        return ans;
    }
};