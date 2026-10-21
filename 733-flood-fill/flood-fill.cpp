class Solution {
public:
    void bfs(int row , int col , vector<vector<int>> &vis , vector<vector<int>> &grid ,int color , int oldColor)
    {
        vis[row][col] = 1;
        queue<pair<int,int>> q;
        int n = grid.size();
        int m = grid[0].size();
        q.push({row , col});
        int delRow[] = {-1, 1, 0, 0};
        int delCol[] = {0, 0, -1, 1};
        grid[row][col] = color;

        while(!q.empty())
        {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            for(int i = 0 ; i < 4 ; i++)
            {
                int nrow = row + delRow[i];
                int ncol = col + delCol[i];

                if(nrow >= 0 && ncol >= 0 && nrow < n && ncol < m && grid[nrow][ncol] == oldColor && vis[nrow][ncol] == 0)
                {
                    vis[nrow][ncol] = 1;
                    q.push({nrow , ncol});
                    grid[nrow][ncol] = color;
                }
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();
        vector<vector<int>> vis(n , vector<int>(m,0));
        int oldColor = image[sr][sc];
        if (oldColor == color) {
            return image;
        }
        bfs(sr, sc,vis, image, color, oldColor);
        return image;
    }
};