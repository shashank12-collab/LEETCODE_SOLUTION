class Solution {
public:
bool reversed(string &str , int l , int r)
{
    int n = str.size();

    while(l <= r)
    {
        if(str[l] != str[r])
        {
            return false;
        }
        l++;
        r--;
    }
    return true;
}
    string longestPalindrome(string s) {
        int n = s.size();
        int maxlen = 0;
        string ans = "";
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = i ; j < n ; j++)
            {
               if(reversed(s,i,j))
               {
                int len = j - i + 1;

                if(len > maxlen)
                {
                    maxlen = len;
                    ans = s.substr(i , len);
                }
               }
            }
        }
        return ans;
    }
};