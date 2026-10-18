
class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";

        for (int i = 0; i < s.size(); i++) {
            if (isalnum(s[i])) {
                ans += tolower(s[i]);
            }
        }

        string s2 = ans;
        reverse(s2.begin(), s2.end());

        return s2 == ans;
    }
};
