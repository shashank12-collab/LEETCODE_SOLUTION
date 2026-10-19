class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        int sqre = 0;
        for(int i = 0 ; i < n ; i++)
        {
            sqre = nums[i] * nums[i];
            ans.push_back(sqre);
        }
        sort(ans.begin() , ans.end());
        return ans;
    }
};