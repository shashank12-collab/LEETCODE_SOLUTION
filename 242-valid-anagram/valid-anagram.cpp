class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        vector<char> s1(t.begin(), t.end());

        for (int i = 0; i < s.size(); i++) {
            auto it = find(s1.begin(), s1.end(), s[i]);

            if (it == s1.end()) {
                return false;
            }

            s1.erase(it);
        }

        return true;
    }
};