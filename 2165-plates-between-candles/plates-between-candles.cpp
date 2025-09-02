class Solution {
public:
    vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {
        int n = s.size();
        int m = queries.size();
        vector<int> ans(m);

        vector<int> preCount(n), postCount(n), plates(n);

        preCount[0] = 0;
        postCount[n-1] = n-1;
        for(int i=1 ; i<n ; i++){
            preCount[i] = s[i] == '|' ? i : preCount[i-1];
            postCount[n-1-i] = s[n-1-i] == '|' ? n-1-i : postCount[n-i];
        }

        int lstIdx = 0;
        bool candleFound = s[0] == '|' ? 1 : 0;
        plates[0] = 0;
        for(int i=1 ; i<n ; i++){
            if(s[i] == '|'){
                if(candleFound){
                    plates[i] = plates[lstIdx] + i - lstIdx - 1;
                    lstIdx = i;
                }
                else{
                    plates[i] = plates[i-1];
                    candleFound = 1;
                    lstIdx = i;
                }
            }
            else{
                plates[i] = plates[i-1];
            }
        }

        for(int i=0 ; i<m ; i++){
            int lftIdx = postCount[queries[i][0]];
            int rghtIdx = preCount[queries[i][1]];

            ans[i] = lftIdx<rghtIdx ? plates[rghtIdx] - plates[lftIdx] : 0;
        }

        return ans;
    }
};