class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size();
        map<int, int> mpp;

        for (int i = 0; i < n; i++) {
            mpp[nums[i]]++;

            if (mpp[nums[i]] > 1) {
                return nums[i];
            }
        }
        return -1;
    }
};