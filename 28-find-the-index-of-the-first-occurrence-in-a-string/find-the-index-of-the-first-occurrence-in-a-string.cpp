class Solution {
public:
    void lpsfind(vector<int>& lps, string& s) {
        // code here
        int n = s.size();
        int pre = 0;
        int suf = 1;

        while (suf < n) {
            if (s[pre] == s[suf]) {
                lps[suf] = pre + 1;
                pre++;
                suf++;
            }

            else {
                if (pre == 0) {
                    lps[suf] = 0;
                    suf++;
                } else {
                    pre = lps[pre - 1];
                }
            }
        }
    }

    int strStr(string haystack, string needle) {
        int first = 0;
        int second = 0;
        int n = haystack.size();
        int m = needle.size();

        if (m == 0) {
            return 0;
        }
        vector<int> lps(m, 0);
        lpsfind(lps, needle);

        while (first < n) {
            if (haystack[first] == needle[second]) {
                second++;
                first++;
            } else {
                if (second == 0) {
                    first++;
                } else {
                    second = lps[second - 1];
                }
            }

            if (second == m) {
                return first - second;
            }
        }
        return -1;
    }
};