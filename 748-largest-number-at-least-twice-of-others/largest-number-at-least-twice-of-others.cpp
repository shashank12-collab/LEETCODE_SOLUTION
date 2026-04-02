class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> large;
        for (int i = 0; i < nums.size(); i++) {
            large.push_back(nums[i]);
        }

        for (int i = 0; i < large.size(); i++) {
            large[i] = 2 * large[i];
        }

        int m = large.size();

        for (int i = 0; i < n; i++) {
            bool istrue = true;
            for (int j = 0; j < m; j++) {
                if (i == j) {
                    continue;
                }
                if (nums[i] < large[j]) {
                    istrue = false;
                    break;
                }
            }
            if (istrue) {
                return i;
            }
        }
        return -1;
    }
};