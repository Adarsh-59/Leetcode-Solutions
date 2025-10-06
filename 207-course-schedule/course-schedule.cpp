class Solution {
public:
    bool canFinish(int num, vector<vector<int>>& prereq) {
        map<int, vector<int>> adj;
        map<int, int> vis, in;
        stack<int> topo;
        vector<int> v;
        set<int> all_nodes;
        queue<int> q;

        int n = prereq.size();

        for(int i=0 ; i<n ; i++){
            adj[prereq[i][1]].push_back(prereq[i][0]);
            in[prereq[i][0]]++;
            all_nodes.insert(prereq[i][1]);
            all_nodes.insert(prereq[i][0]);
        }

        for(auto node : all_nodes){
            if(in[node] == 0){
                q.push(node);
            }
        }

        while(!q.empty()){
            int curr = q.front();
            v.push_back(curr);
            q.pop();

            for(auto next : adj[curr]){
                in[next]--;

                if(in[next] == 0){
                    q.push(next);
                }
            }
        }

        for(int i=0 ; i<v.size() ; i++){
            cout << v[i] << " ";
        }
        cout << endl;

        if(v.size() != all_nodes.size()){
            return 0;
        }

        return 1;



    }
};