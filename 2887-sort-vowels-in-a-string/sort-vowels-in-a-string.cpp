class Solution {
public:
    string sortVowels(string s) {
        string ans;
        vector<int> lower(26, 0);
        vector<int> higher(26, 0);
        int n = s.size();

        for (int i = 0; i < n; i++) {
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' ||
                s[i] == 'U') {
                higher[s[i] - 'A']++;
                s[i] = '#';
            } else if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
                       s[i] == 'o' || s[i] == 'u') {
                lower[s[i] - 'a']++;
                s[i] = '#';
            }
        }

        for (int i = 0; i < 26; i++) {
            char c = 'A' + i;

            while (higher[i]--) {
                ans += c;
            }
        }

        for (int i = 0; i < 26; i++) {
            char c = 'a' + i;

            while (lower[i]--) {
                ans += c;
            }
        }
        int j = 0;
        for (int i = 0; i < n ;i++) {
            if (s[i] == '#') {
                s[i] = ans[j++];
            }
        }
        return s;
    }
};