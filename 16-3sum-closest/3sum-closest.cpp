class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int sum = 0 ;
        int closest = nums[0] + nums[1] + nums[2];
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
            if(abs(target - sum) < abs(target - closest))
                {
                    closest = sum;
            }  
        }
       }
        return closest;
    }
};