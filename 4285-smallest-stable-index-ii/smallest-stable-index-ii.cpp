class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> prefixs(n);
        vector<int> suffixs(n);
        int stable = 0;
        prefixs[0] = nums[0];
        suffixs[n-1] = nums[n-1];

        for(int i = 1 ; i < n ; i++)
        {
            prefixs[i] = max(prefixs[i-1] , nums[i]);
        }

        for(int i = n-2 ; i >= 0 ; i--)
        {
            suffixs[i] = min(suffixs[i+1] ,nums[i]);
        }
        for(int i = 0 ; i < n ; i++)
        {
            stable = prefixs[i] - suffixs[i];

            if(stable <= k)
            {
                return i;
            }
        }
        return -1;
    }
};