class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right = n - 1;
        int mini = INT_MAX;

        while (left <= right) {
            int mid = (left + right) / 2;

            mini = min(mini, nums[mid]);

            if (nums[left] == nums[mid] && nums[right] == nums[mid]) {
                right--;
                left++;
            } else if (nums[left] <= nums[mid]) {
                mini = min(mini, nums[left]);
                left = mid + 1;
            } else {
                mini = min(nums[mid] , mini);
                right = mid - 1;
            }
        }
        return mini;
    }
};