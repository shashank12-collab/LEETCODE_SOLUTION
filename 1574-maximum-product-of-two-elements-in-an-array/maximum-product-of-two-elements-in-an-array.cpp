class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin() , nums.end());
        int last_digit = n - 1;
        int second_last_digit = n-2;
        int mul = 1;
        mul = (nums[last_digit] - 1) * (nums[second_last_digit] - 1);
        return mul;
    }
};