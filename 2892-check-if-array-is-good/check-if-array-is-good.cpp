class Solution {
public:
    bool isGood(vector<int>& nums) {
       int n = nums.size();
       sort(nums.begin() , nums.end());
       int maxi = nums[n-1];
       
       if(n == 1)
       {
        return false;
       }

        for(int i = 0; i < n - 1; i++)
        {
            if(nums[i] != i + 1)
            {
                return false;
            }
        }

       if(nums[n-1] == nums[n-2] && nums.size() == maxi+1)
       {
        return true;
       }
       return false;
    }
};