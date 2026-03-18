class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.size();
        int cnt = 0;
        bool odd = 0;
        vector<int> arr1(26, 0);
        vector<int> arr2(26, 0);

        for (int i = 0; i < n; i++) {
            if (s[i] >= 'a') {
                arr1[s[i] - 'a']++;
            }

            else {
                arr2[s[i] - 'A']++;
            }
        }
        for (int i = 0; i < 26; i++) {
            if (arr1[i] % 2 == 0) {
                cnt += arr1[i];
            } else {
                cnt += arr1[i] - 1;
                odd = 1;
            }

            if (arr2[i] % 2 == 0) {
                cnt += arr2[i];
            } else {
                cnt += arr2[i] - 1;
                odd = 1;
            }
        }
        return cnt + odd;
    }
};