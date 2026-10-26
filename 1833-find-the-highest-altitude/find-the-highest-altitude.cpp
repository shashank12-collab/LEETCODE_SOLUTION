class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int HighestAltitude = INT_MIN;
        vector<int> ans(n+1 , 0);
        int prefix = 0;
        for(int i = 0 ; i < n ; i++)
        {
            prefix += gain[i];
            ans[i+1] += prefix;
        }
        for(int i = 0 ; i < ans.size() ; i++)
        {
            HighestAltitude = max(ans[i] , HighestAltitude);
        }
        return HighestAltitude;
    }
};