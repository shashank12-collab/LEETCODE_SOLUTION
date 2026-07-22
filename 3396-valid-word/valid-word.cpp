class Solution {
public:
    bool isValid(string word) {
        int n = word.length();
        bool hasVowel = false;
        bool hasConsonant = false;
        if (n < 3) {
            return false;
        }

        for (auto it : word) {
            if (!isalnum(it)) {
                return false;
            }
            it = tolower(it);
            if (it == 'a' || it == 'e' || it == 'i' || it == 'o' || it == 'u') {
                hasVowel = true;
            } else if (isalpha(it)) {
                hasConsonant = true;
            }
        }
        if (!hasVowel || !hasConsonant) {
            return false;
        }
        return true;
    }
};