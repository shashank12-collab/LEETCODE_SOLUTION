class Solution {
public:
int nums(char c)
{
    if(c == 'I')
    {
        return 1;
    }
    else if(c == 'V')
    {
        return 5;
    }
    else if(c == 'X')
    {
        return 10;
    }
    else if(c == 'L')
    {
        return 50;
    }
    else if(c == 'C')
    {
        return 100;
    }
    else if(c == 'D')
    {
        return 500;
    }
    else
    {
        return 1000;
    }
}
    int romanToInt(string s) {
       int n = s.size();
       int sum = 0;

       for(int i = 0 ; i < n ; i++)
       {
        if(i < n - 1 && nums(s[i]) < nums(s[i+1]))
        {
            sum -= nums(s[i]);
        }
        else 
        {
            sum += nums(s[i]);
        }
       } 
       return sum;
    }
};