class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> ans;

        for(int i = 0 ; i < n ; i++)
        {
            int mini = INT_MAX;
            int col = -1;
            for(int j = 0 ; j < m ; j++)
            {
                if(matrix[i][j] < mini)
                {
                    mini = matrix[i][j];
                    col = j;
                }
            }
        
        int k;
        for( k = 0 ;k < n ; k++)
          {
            if(matrix[k][col] > mini)
            {
                break;
            }
         }

         if(k == n)
         {
            ans.push_back(mini);
         }
        }
        return ans;
    }
};