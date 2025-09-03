class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int sum = 0;

        for(int i=0 ; i<n ; i++){
            sum += (gas[i] - cost[i]);
        }

        if(sum < 0){
            return -1;
        }

        vector<int> v(n, -1);
        int currSum = 0;

        for(int i=0 ; i<n ; i++){
            currSum += (gas[i] - cost[i]);

            if(currSum >= 0){
                v[i] = currSum;
            }
            else{
                currSum = 0;
            }
        }

        int i;
        for(i=n-1 ; i>0 ; i--){
            if(v[i] >= 0 && v[i-1] == -1){
                break;
            }
        }

        return i;
    }
};