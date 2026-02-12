class Solution {
public:
    int hammingWeight(int n) {
        string res = "";
        while(n > 0)
        {
            if(n%2 == 1)
            {
                res += '1';
            }
            else 
            {
                res += '0';
            }
            n= n/2;
        }
        reverse(res.begin() , res.end());

        int s = res.size();
        int cnt = 0;
        for(int i = 0 ; i < s ; i++)
        {
            if(res[i] == '1')
            {
                cnt++;
            }
        }
        return cnt;
    }
};