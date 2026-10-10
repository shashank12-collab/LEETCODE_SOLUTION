class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& edges) {
        int V = edges.size();
        vector<vector<pair<int, int>>> adj(V);
        for (int i = 0; i < V; i++) {
            for (int j = i + 1; j < V; j++) {
                int x1 = edges[i][0];
                int y1 = edges[i][1];
                int x2 = edges[j][0];
                int y2 = edges[j][1];

                int w = abs(x1 - x2) + abs(y1 - y2);

                adj[i].push_back({j, w});
                adj[j].push_back({i, w});
            }
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>,
                       greater<pair<int, int>>>
            pq;

        vector<int> vis(V, 0);

        pq.push({0, 0});
        int sum = 0;
        while (!pq.empty()) {
            auto it = pq.top();
            pq.pop();
            int node = it.second;
            int wt = it.first;
            if (vis[node] == 1) {
                continue;
            }
            vis[node] = 1;
            sum += wt;

            for (auto it : adj[node]) {
                int adjNode = it.first;
                int ewt = it.second;
                if (!vis[adjNode]) {
                    pq.push({ewt, adjNode});
                }
            }
        }
        return sum;
    }
};