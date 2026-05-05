#include <cmath>
class Solution {
public:
bool isprime(int n)
{
    int limit = sqrt(n);
        if(n <= 1) 
        {
            return false;
        }
        for(int i=2 ;i<=limit ;i++){
            if(n%i == 0){
                return false;
            }
        }
        return true;
}

int reverse(int n)
{
    int rev = 0;
    while(n)
        {
            int digit = n % 10;
            n = n /10;
            rev = rev * 10 + digit;
        }
        return rev;
}
    int sumOfPrimesInRange(int n) {
    int m = reverse(n);
    int sum = 0;
    int start = min(n,m);
    int end = max(n,m);
        for(int i = start ; i <= end ; i++)
        {
            if(isprime(i))
            {
                sum += i;
            }
        }
    return sum;
    }
};