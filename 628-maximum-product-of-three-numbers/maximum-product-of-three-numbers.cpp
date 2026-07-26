class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        int maximum = INT_MIN;
        int second_maximum = INT_MIN;
        int Third_maximum = INT_MIN;
        int minimum = INT_MAX;
        int second_minimum = INT_MAX;
        long long mul = 1;
        for(int i = 0 ; i < n ; i++)
        {
            if(nums[i] > maximum)
            {
                Third_maximum = second_maximum;
                second_maximum = maximum;
                maximum = nums[i];
            }
            else if(nums[i] > second_maximum)
            {
                Third_maximum = second_maximum;
                second_maximum = nums[i];
            }
            else if(nums[i] > Third_maximum)
            {
                Third_maximum = nums[i];
            }
            if(nums[i] < minimum)
            {
                second_minimum = minimum;
                minimum = nums[i];
            }
            else if(nums[i] < second_minimum)
            {
                second_minimum = nums[i];
            }
        }
        long long product1 = 1LL * maximum * second_maximum * Third_maximum;
        long long product2 = 1LL * maximum * minimum * second_minimum;
        mul = max(product1 , product2);
        return mul;
    }
};