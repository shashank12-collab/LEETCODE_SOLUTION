class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {

        vector<vector<pair<int, int>>> adj(n + 1);
        for (auto it : times) {
            int u = it[0];
            int v = it[1];
            int w = it[2];
            adj[u].push_back({v, w});
        }

        vector<int> dist(n+1, 1e9);
        priority_queue<pair<int, int>, vector<pair<int, int>>,
                       greater<pair<int, int>>>
            pq;
        dist[k] = 0;
        pq.push({0, k});

        while (!pq.empty()) {
            auto it = pq.top();
            pq.pop();
            int time = it.first;
            int node = it.second;

            if (time > dist[node]) {
                continue;
            }

            for (auto itr : adj[node]) {
                int adjnode = itr.first;
                int ewt = itr.second;
                if (time + ewt < dist[adjnode]) {
                    dist[adjnode] = time + ewt;
                    pq.push({dist[adjnode], adjnode});
                }
            }
        }
        int timeTaken = 0;
        for (int i = 1 ; i <= n ; i++) {
            if (dist[i] == 1e9) {
                return -1;
            }
            timeTaken = max(timeTaken , dist[i]);
        }
        return timeTaken;
    }
};