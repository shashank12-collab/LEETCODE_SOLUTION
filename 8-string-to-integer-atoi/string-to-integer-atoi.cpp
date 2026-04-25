class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        long long ans = 0;
        int sign = 1;
        int i = 0;
        while (i < n && s[i] == ' ') {
            i++;
        }
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-') {
                sign = -1;
            }
            i++;
        }
        while (i < n) {
            if (s[i] < 48 || s[i] > 57) {
                break;
            }
            ans = ans * 10 + (s[i] - '0');
            i++;

            if(sign == 1 && ans > INT_MAX)
            {
                return INT_MAX;
            }

            if( sign == -1 && -ans < INT_MIN)
            {
                return INT_MIN;
            }
        }
        return sign * ans;
    }
};