class Solution {
public:
    bool get_bit(int num, int pos){
        return (1<<pos & num);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> st;
        vector<vector<int>> ans;
        int n = nums.size();

        sort(nums.begin(), nums.end());
        for(int i=0 ; i<pow(2, n) ; i++){
            vector<int> temp;
            for(int j=0 ; j<n ; j++){
                if(get_bit(i, j)){
                    temp.push_back(nums[j]);
                }
            }
            st.insert(temp);
        } 

        for(auto &it : st){
            ans.push_back(it);
        }

        return ans;
    }
};