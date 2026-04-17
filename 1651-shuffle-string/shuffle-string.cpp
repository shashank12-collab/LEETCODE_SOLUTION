class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
       int n = s.size(); 
       int m = indices.size();
       string ans(n, ' ');
       for(int i = 0 ; i < m ;i++)
       {
         ans[indices[i]] = s[i];
       }
       return ans;
    }
};