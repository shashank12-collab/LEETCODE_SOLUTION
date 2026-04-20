class Solution {
public:

    int findminnum(vector<int>& nums , int i)
    {
        int n = nums.size();
        int small = INT_MAX;
        for(int j = i ; j < n ; j++)
        {
            if(small > nums[j])
            {
                small = nums[j];
            }
        }
        return small;
    }
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int latge = INT_MIN;
        int stable = 0;
        for(int i = 0 ; i < n ; i++)
        {
           if(latge < nums[i])
           {
            latge = nums[i];
           }
        int mini = findminnum(nums , i);
        stable = latge - mini;
        if(stable <= k)
        {
            return i;
        }
        }
        return -1;
    }
};