class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n = intervals.size();
        vector<vector<int>> arr;
        bool flag = 0;
        
        for(int i=0 ; i<n ; i++){
            if(flag){
                arr.push_back(intervals[i]);
            }
            else{
                if(intervals[i][0] < newInterval[0]){
                    arr.push_back(intervals[i]);
                }
                else if(intervals[i][0] > newInterval[0]){
                    arr.push_back(newInterval);
                    arr.push_back(intervals[i]);
                    flag = 1;
                }
                else{
                    if(intervals[i][1] <= newInterval[1]){
                        arr.push_back(intervals[i]);
                        arr.push_back(newInterval);
                    }
                    else{
                        arr.push_back(newInterval);
                        arr.push_back(intervals[i]);
                    }
                    flag = 1;
                }
            }
        } 

        if(!flag){
            arr.push_back(newInterval);
        }

        for(int i=0 ; i<=n ; i++){
            cout << arr[i][0] << "," << arr[i][1] << " ";
        }

        vector<vector<int>> ans;
        vector<int> v(2);
        int start, end;
        start = arr[0][0];
        end = arr[0][1];

        for(int i=1 ; i<=n ; i++){
            if(arr[i][0] > end){
                v[0] = start;
                v[1] = end;
                ans.push_back(v);
                start = arr[i][0];
                end = arr[i][1];
            }
            else{
                end = max(arr[i][1], end);
            }
        }
        v[0] = start;
        v[1] = end;
        ans.push_back(v);

        return ans;
    }
};