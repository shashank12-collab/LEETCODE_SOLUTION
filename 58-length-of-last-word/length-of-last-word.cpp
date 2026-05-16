class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        string temp ="";
        for(int i = n-1 ; i >= 0 ; i--)
        {
            if(s[i] != ' ')
            {
                temp += s[i];
            }
            else if(temp.size() > 0)
            {
                break;
            }
        }
        
        return temp.size();
    }
};