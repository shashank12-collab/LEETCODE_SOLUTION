class Solution {
public:
    string NumberToDecimal(int n)
    {
        string s = "";
        while(n > 0)
            {
                if(n % 2 == 0)
                {
                    s += '0';
                }
                else
                {
                    s += '1';
                }
                 n= n/2;

            }
        reverse(s.begin() , s.end());
        return s;
    }

    int binaryToNumber(string s)
  {
    int len = s.length();
    long long p2 = 1;
    int num = 0;

    for(int i = len - 1 ; i >= 0 ; i--)
    {
        if(s[i] == '1')
        {
            num = num + p2 ;
        }
        p2 = p2 * 2;
    }
    return num;
  }

    int findComplement(int num) {
        string s1 = NumberToDecimal(num);
        for(int i = 0 ; i < s1.size() ; i++)
            {
                if(s1[i] == '0')
                {
                    s1[i] = '1';
                }
                else
                {
                    s1[i] = '0';
                }
            }
        int ans = binaryToNumber(s1);
        return ans;
    }
};