class Solution {
public:
    int magicalString(int n) {
       if(n <= 0)
       {
           return 0;
       }
        if(n <= 3)
        {
            return 1;
        }

        string s = "122";
        int num = 2;
        char next = '1';
        while(s.size() < n)
            {
                int len = s[num] - '0';
                for(int i = 0 ; i < len && s.size() < n ; i++)
                    {
                        s += next;
                    }

                next = (next == '1') ? '2' : '1';
                num++;
            }
        int cnt = 0;
        for(int j = 0 ; j < n ; j++)
            {
                if(s[j] == '1')
                {
                    cnt++;
                }
            }
        return cnt;
    }
};