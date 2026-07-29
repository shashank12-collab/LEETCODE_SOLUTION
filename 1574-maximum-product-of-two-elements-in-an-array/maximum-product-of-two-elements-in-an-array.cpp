class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        // sort(nums.begin() , nums.end());
        // int last_digit = n - 1;
        // int second_last_digit = n-2;
        // int mul = 1;
        // mul = (nums[last_digit] - 1) * (nums[second_last_digit] - 1);
        // return mul;
        int largest = INT_MIN;
        int second_largest = INT_MIN;

        for (int i = 0; i < n; i++) {
            if (nums[i] >= largest) {
                second_largest = largest;
                largest = nums[i];
            } else if (nums[i] > second_largest) {
                second_largest = nums[i];
            }
        }

        return (largest - 1) * (second_largest - 1);
    }
};