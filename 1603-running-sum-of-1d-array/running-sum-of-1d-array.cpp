class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n , 0);
        int prefix = nums[0];
        for(int i = 0 ; i < n  ; i++)
        {
            ans[i] = prefix;
            if(i+1 <  n)
            {
                prefix += nums[i+1];
            }
        }        
        return ans;          
    }
};