class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n = graph.size();
        int src = 0;
        int dest = n-1;
        vector<vector<int>> ans;
        queue<vector<int>> q;
        q.push({src});
        while(!q.empty())
        {
            vector<int> path = q.front();
            q.pop();

            int node = path.back();

            if(node == dest)
            {
                ans.push_back(path);
                continue;
            }

            for(auto it : graph[node])
            {
                vector<int> newpath = path;
                newpath.push_back(it);
                q.push(newpath);
            }
        }
        return ans;
    }
};