class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int> ansarray;
        ansarray.push_back(0);
        for(int i = 0 ; i < n ; i++)
        {
            int res = ansarray[i] + gain[i];
           ansarray.push_back(res);
        }

        int maxi = ansarray[0];
        for(int i = 1 ; i < ansarray.size() ; i++)
        {
            maxi = max(maxi , ansarray[i]);
        }
        return maxi;
    }
};