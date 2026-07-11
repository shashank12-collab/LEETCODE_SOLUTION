class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int , int> mpp;
        for(int i = 0 ; i < n ; i++)
            {
                mpp[nums[i]]++;
            }

        int mid = n / 2;
        if(mpp[nums[mid]] == 1)
        {
            return true;
        }
        return false;
    }
};