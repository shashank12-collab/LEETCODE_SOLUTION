class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int sum = 0 ;
        int closest = nums[0] + nums[1] + nums[2];
        int max_diff = INT_MAX;
        int diff = 0;
        sort(nums.begin() , nums.end());

       for(int i = 0 ; i <= n - 2 ; i++)
       {
         int l = i + 1;
         int j = n-1;
         while(l < j)
           {
            sum = nums[i] + nums[j] + nums[l];
            if(sum == target)
            {
                return sum;
            }
            if(sum < target)
            {
                l++;
            }
            if(sum > target)
            {
                j--;
            }
           diff = abs(sum - target);
           if(diff < max_diff)
           {
            max_diff = diff;
            closest = sum;
           }
        }
       }
        return closest;
    }
};