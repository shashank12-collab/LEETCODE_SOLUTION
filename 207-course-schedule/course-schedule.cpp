class Solution {
public:
    bool canFinish(int N, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(N);
        for(auto it : prerequisites) {
            int u = it[0];
            int v = it[1];

            adj[v].push_back(u);
        }

        vector<int> indegree(N, 0);

        for(int i = 0; i < N; i++) {
            for(auto it : adj[i]) {
                indegree[it]++;
            }
        }
        queue<int> q;
        for(int i = 0; i < N; i++) {
            if(indegree[i] == 0) {
                q.push(i);
            }
        }
        vector<int> topo;
        while(!q.empty()) {
            int node = q.front();
            q.pop();
            topo.push_back(node);
            for(auto it : adj[node]) {
                indegree[it]--;

                if(indegree[it] == 0) {
                    q.push(it);
                }
            }
        }
        return topo.size() == N;
    }
};