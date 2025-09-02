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
            // if(s[i] == '|'){
            //     preCount[i] = i;
            // }
            // else{
            //     preCount[i] = preCount[i-1];
            // }
        }

        // postCount[n-1] = n-1;
        // for(int i=n-2 ; i>=0 ; i--){
        //     postCount[i] = s[i] == '|' ? i : postCount[i+1];
        //     // if(s[i] == '|'){
        //     //     postCount[i] = i;
        //     // }
        //     // else{
        //     //     postCount[i] = postCount[i+1];
        //     // }
        // }

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

        // for(int i=0 ; i<n ; i++){
        //     cout << i << " ";
        // }
        // cout << endl;
        // for(int i=0 ; i<n ; i++){
        //     cout << preCount[i] << " ";
        // }
        // cout << endl;
        // for(int i=0 ; i<n ; i++){
        //     cout << postCount[i] << " ";
        // }
        // cout << endl;
        // for(int i=0 ; i<n ; i++){
        //     cout << plates[i] << " ";
        // }
        // cout << endl;

        for(int i=0 ; i<m ; i++){
            int left = queries[i][0];
            int right = queries[i][1];

            int lftIdx = postCount[left];
            int rghtIdx = preCount[right];

            if(lftIdx >= rghtIdx){
                ans[i] = 0;
            }
            else{
                ans[i] = plates[rghtIdx] - plates[lftIdx];
            }
        }

        return ans;
    }
};