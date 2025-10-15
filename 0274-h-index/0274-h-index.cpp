class Solution {
public:
    bool checkMid(vector<int> citations, int h){
        int count = 0;
        int n = citations.size();

        for(int i=0 ; i<n ; i++){
            if(citations[i] >= h){
                count++;
            }
        }

        return count >= h;
    }
    int hIndex(vector<int>& citations) {
        int n = citations.size();

        int first = 1, last = n;
        int hIndex = 0;
        while(first <= last){
            int mid = first + (last - first)/2;

            if(checkMid(citations, mid)){
                hIndex = mid;
                first = mid + 1;
            }
            else{
                last = mid - 1;
            }
        }

        return hIndex;
    }
};