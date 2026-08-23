class Solution {
public:
    bool checkDivisibility(int n) {
       int sum = 0;
       int mul = 1;
       int total = 0;
       int real = n;
       while(n > 0)
       {
        int last_digit = n % 10;
        sum += last_digit;
        mul *= last_digit;
        n = n/10;
       }
       total = sum + mul;
       if(real % total != 0)
       {
            return false;
       } 
       return true;
    }
};