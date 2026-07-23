class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();
        int ans = 1;
        if(n == 1)
        {
            return 1;
        }
        if(n == 2)
        {
            return 2;
        }
        while(ans <= n)
        {
            ans <<=1;
        }
        return ans;
    }
};