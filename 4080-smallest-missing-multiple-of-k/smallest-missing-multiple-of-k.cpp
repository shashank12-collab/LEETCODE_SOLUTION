class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int maxi = *max_element(nums.begin(), nums.end());
        vector<int>res;
        maxi = maxi + k;
          for (int i = k; i <= maxi; i += k) {

            if (find(nums.begin(), nums.end(), i) == nums.end()) {
                res.push_back(i);
            }
        }
        int ans = *min_element(res.begin(), res.end());
        return ans;
    }
};