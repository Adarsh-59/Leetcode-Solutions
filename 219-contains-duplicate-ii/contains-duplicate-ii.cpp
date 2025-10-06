class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, vector<int>> m;

        for(int i=0 ; i<nums.size() ; i++){
            m[nums[i]].push_back(i);
        }

        for(auto i:m){
            cout << i.first << ": ";
            for(int j=0 ; j<i.second.size() ; j++){
                cout << i.second[j] << " ";
            }
            cout << endl;
        }

        for(auto i:m){
            if(i.second.size() > 1){
                int mn = INT_MAX;
                for(int j=0 ; j<i.second.size()-1 ; j++){
                    mn = min(mn, i.second[j+1]-i.second[j]);
                }

                if(mn <= k){
                    return true;
                }
            }
        }

        return false;
    }
};