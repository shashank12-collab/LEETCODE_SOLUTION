class Solution {
public:
    vector<int> NumToArr(int n) {
        vector<int> ans;
        while (n >= 1) {
            int last_digit = n % 10;
            ans.push_back(last_digit);
            n = n / 10;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    int maxDigitRange(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;
        vector<int> ans;
        if (nums.size() == 1) {
            return nums[0];
        }
        for (int i = 0; i < n; i++) {
            res = NumToArr(nums[i]);
            int large = *max_element(res.begin(), res.end());
            int small = *min_element(res.begin(), res.end());
            int range = large - small;
            ans.push_back(range);
        }
        int maxRange = *max_element(ans.begin(), ans.end());

        int sum = 0;

        for (int i = 0; i < n; i++) {
            if (ans[i] == maxRange) {
                sum += nums[i];
            }
        }
        return sum;
    }
};