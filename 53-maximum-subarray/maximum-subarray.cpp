class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxisum = nums[0];
        int n = nums.size();
        int sum = 0;
        for(int i = 0 ; i < n ; i++)
        {
            sum += nums[i];
            maxisum = max(sum , maxisum);

            if(sum < 0)
            {
                sum = 0;
            }
        }
        return maxisum;
    }
};