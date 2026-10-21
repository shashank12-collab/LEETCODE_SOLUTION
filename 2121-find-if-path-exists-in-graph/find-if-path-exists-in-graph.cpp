class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int src, int destination) {
        vector<vector<int>> adj(n);
        for(auto it : edges)
        {
            int u = it[0];
            int v = it[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        queue<int> q;
        q.push(src);
        vector<int> vis(n , false);
        vis[src] = true;
        while(!q.empty())
        {
            int node = q.front();
            q.pop();

            if(node == destination)
            {
                return true;
            }
            for(auto it : adj[node])
            {
                if(!vis[it])
                {
                    vis[it] = true;
                    q.push(it);
                }
            }
        }
        return false;
    }
};