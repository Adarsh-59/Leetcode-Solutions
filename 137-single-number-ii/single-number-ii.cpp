class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i, j;

        int a[32] = {0};

        for(i=0 ; i<32 ; i++){
            for(j=0 ; j<nums.size() ; j++){
                int x = 1<<i & nums[j];

                if(x){
                    a[i]++;
                }
            }
        }

        for(i=0 ; i<32 ; i++){
            if(a[i]%3 == 0){
                a[i] = 0;
            }
            else{
                a[i] = a[i]%3;
            }
        }

        int num=0;
        for(i=0 ; i<32 ; i++){
            if(a[i]){
                num += 1<<i;
            }
        }

        return num;
    }
};