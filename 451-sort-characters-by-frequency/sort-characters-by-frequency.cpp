class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        unordered_map<char, int> mpp;

        for (int i = 0; i < n; i++) {
            mpp[s[i]]++;
        }
        vector<pair<int, int>> arr;
        for (auto it : mpp) {
            arr.push_back({it.first, it.second});
        }

        string s1 = "";
        sort(arr.begin(), arr.end(), [](auto& a, auto& b) {
            if (a.second == b.second)
                return a.first < b.first;
            return a.second > b.second;
        });
        for (auto it : arr) {
            for (int i = 0; i < it.second; i++) {
                s1 += it.first;
            }
        }
        return s1;
    }
};