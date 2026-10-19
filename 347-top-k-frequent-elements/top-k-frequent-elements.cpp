
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        int n = nums.size();
        unordered_map<int, int> mpp;

        for (int i = 0; i < n; i++) {
            mpp[nums[i]]++;
        }
        vector<pair<int, int>> arr;
        for (auto it : mpp) {
            arr.push_back({it.first, it.second});
        }
        sort(arr.begin(), arr.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });
        for (int i = 0; i < k && i < arr.size(); i++) {
            ans.push_back(arr[i].first);
        }

        return ans;
    }
};
