class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i, new_target, st, en, mid;
        vector<int> v;

        for(i=0 ; i<numbers.size()-1 ; i++){
            new_target = target - numbers[i];

            st = i+1;
            en = numbers.size()-1;
            
            while(st <= en){
                mid = (st+en)/2;

                if(new_target == numbers[mid]){
                    v.push_back(i+1);
                    v.push_back(mid+1);
                    break;
                }
                else if(new_target < numbers[mid]){
                    en = mid-1;
                }
                else{
                    st = mid+1;
                }
            }
        }
        return v;
    }
};