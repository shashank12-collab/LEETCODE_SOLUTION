class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int n = nums.size();
        map<int,int> mpp;
        int pairs = 0;
        int left = 0;

        for(int i = 0 ; i < n ; i++)
        {
            mpp[nums[i]]++;
        }

        for(auto it : mpp)
        {
            pairs += it.second / 2;
            left += it.second % 2;
        }
        return {pairs , left};
    }
};