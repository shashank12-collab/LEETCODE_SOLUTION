class Solution {
public:
vector<int> numToArr(int n )
{
    vector<int> ans;
    while(n > 0)
    {
        int last_digit = n % 10;
        ans.push_back(last_digit);
        n = n / 10;
    }
    reverse(ans.begin() , ans.end());
    return ans;
}
 int DigitProduct(vector<int> nums)
 {
    int n = nums.size();
    int mul = 1;
    for(int i = 0 ; i < n ; i++)
    {
        mul *= nums[i];
    }
    return mul;
 } 
    int smallestNumber(int n, int t) {
        int ans = 0;
        int multiply = 1;
        for(int i = n ; i <= 100 ; i++)
        {
            vector<int> res = numToArr(i);
            multiply =  DigitProduct(res);
            if(multiply % t == 0)
            {
                return i;
            }
        }
        return -1;
    }
};