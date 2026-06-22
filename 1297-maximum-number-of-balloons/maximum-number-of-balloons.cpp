class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int n = text.length();
        int ans = 0;
        unordered_map<char , int>mpp;
        for(int i = 0 ; i < n ; i++)
        {
            if(text[i] == 'b' || text[i] == 'a' || text[i] == 'l' || text[i] == 'o' || text[i] == 'n')
            {
                mpp[text[i]]++;
            }
        }

        for(auto it : mpp)
        {
           int b = mpp['b'];
           int a = mpp['a'];
           int l = mpp['l'] / 2 ;
           int o = mpp['o'] / 2;
           int n = mpp['n'];

         ans = min({b, a, l, o, n});
        }
        return ans;
    }
};