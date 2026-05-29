class Solution {
public:
    int sumOfDigit(int n)
    {
        int sum = 0;
        while(n > 0)
        {
            int digit = n % 10;
            sum = sum + digit;
            n = n / 10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX;
        for(int i = 0 ; i < n ; i++)
        {
            nums[i] = sumOfDigit(nums[i]);
            
        }
        for(int i = 0 ; i < n ; i++)
        {
            mini = min(mini , nums[i]);
        }
        return mini;
    }
};