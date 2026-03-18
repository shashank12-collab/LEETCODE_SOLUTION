class Solution {
public:
    string sortSentence(string s) {
        int n = s.size();
        string temp;
        int index = 0;
        vector<string> ans(10);
        while (index < n) {
            if (s[index] == ' ') {
                int pos = temp.back() - '0';
                temp.pop_back();
                ans[pos - 1] = temp;
                temp = "";
            } else {
                temp += s[index];
            }
            index++;
        }
        int pos = temp.back() - '0';
        temp.pop_back();
        ans[pos - 1] = temp;
        string result;
        for (int i = 0; i < ans.size(); i++) {
            if (ans[i] != "") {
                result += ans[i] + " ";
            }
        }
        if (!result.empty())
            result.pop_back();
        return result;
    }
};