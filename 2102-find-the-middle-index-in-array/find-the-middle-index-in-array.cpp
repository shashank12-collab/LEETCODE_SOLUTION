class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,0);
        for(int i = 0 ; i < n ; i++)
        {
            if(i == 0)
            {
                ans[i] = nums[i];
            }
            else
            {
            ans[i] = ans[i-1] + nums[i];
            }
        }
        int totalsum = ans[n-1];
        for(int i = 0 ; i < n ; i++)
        {
            int leftsum ;
            int rightsum ;

            if(i == 0)
            {
                leftsum = 0;
            }
            else
            {
                leftsum = ans[i-1];
            }
            rightsum = totalsum - ans[i];

            if(leftsum == rightsum)
            {
                return i;
            }
        }
        return -1;
    }
};