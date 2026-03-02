class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
        return false;
        int num = x;
        long long rev = 0;
        while(num>0)
        {
            int last_digit = num%10;
            num=num/10;
            rev= (rev * 10)+ last_digit;
        }
        if(num == rev)
        {
            return true;
        }
        return x== rev;
    }

};