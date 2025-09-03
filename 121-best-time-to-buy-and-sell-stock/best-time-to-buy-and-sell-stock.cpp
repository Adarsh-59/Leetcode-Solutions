class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        vector<int> minFromLeft(n), maxFromRight(n);

        minFromLeft[0] = prices[0];
        maxFromRight[n-1] = prices[n-1];

        for(int i=1 ; i<n ; i++){
            minFromLeft[i] = min(minFromLeft[i-1], prices[i]);
            maxFromRight[n-1-i] = max(maxFromRight[n-i], prices[n-1-i]);
        }

        int maximumProfit = 0;
        for(int i=0 ; i<n ; i++){
            maximumProfit = max(maximumProfit, maxFromRight[i] - minFromLeft[i]);
        }

        return maximumProfit;
    }
};