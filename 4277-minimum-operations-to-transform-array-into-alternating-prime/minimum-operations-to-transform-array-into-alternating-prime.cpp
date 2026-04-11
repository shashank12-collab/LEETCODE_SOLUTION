class Solution {
public:
    bool isprime(int nums) {
        if (nums <= 1) {
            return false;
        }
        for (int i = 2 ; i * i <= nums; i++) {
            if (nums % i == 0) {
                return false;
            }
        }
        return true;
    }

    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                while (!isprime(nums[i])) {
                    nums[i]++;
                    count += 1;
                }
            } else {
                while (isprime(nums[i])) {
                    nums[i]++;
                    count += 1;
                }
            }
        }
        return count;
    }
};