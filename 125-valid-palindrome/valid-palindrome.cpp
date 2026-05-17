class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        string oldstr = "";
        string newstr = "";
        for (int i = 0; i < n; i++) {
            s[i] = tolower(s[i]);
        }
        for (int i = 0; i < n; i++) {
            if (s[i] >= 'a' && s[i] <= 'z' || (s[i] >= '0' && s[i] <= '9')) {
                oldstr += s[i];
            }
        }
        newstr = oldstr;
        reverse(newstr.begin(), newstr.end());
        if (oldstr != newstr) {
            return false;
        }
        return true;
    }
};