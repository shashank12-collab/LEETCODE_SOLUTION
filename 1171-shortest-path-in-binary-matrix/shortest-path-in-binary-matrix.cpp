class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        pair<int, int> src = {0, 0};
        pair<int, int> dest = {n - 1, m - 1};
        if (mat[src.first][src.second] == 1 ||
            mat[dest.first][dest.second] == 1) {
            return -1;
        }

        if (n == 1 && m == 1) {
            return 1;
        }

        queue<pair<int, pair<int, int>>> q;

        vector<vector<int>> dist(n, vector<int>(m, 1e9));
        dist[src.first][src.second] = 1;
        q.push({1, {src.first, src.second}});
        int dr[] = {-1, -1, -1, 0, 0, 1, 1, 1};
        int dc[] = {-1, 0, 1, -1, 1, -1, 0, 1};

        while (!q.empty()) {
            auto it = q.front();
            q.pop();
            int row = it.second.first;
            int col = it.second.second;
            int dis = it.first;

            for (int i = 0; i < 8; i++) {
                int newr = row + dr[i];
                int newc = col + dc[i];

                if (newr >= 0 && newr < n && newc >= 0 && newc < m &&
                    mat[newr][newc] == 0 && dis + 1 < dist[newr][newc]) {
                    dist[newr][newc] = dis + 1;

                    if (newr == dest.first && newc == dest.second) {
                        return dis + 1;
                    }

                    q.push({dis + 1, {newr, newc}});
                }
            }
        }
        return -1;
    }
};