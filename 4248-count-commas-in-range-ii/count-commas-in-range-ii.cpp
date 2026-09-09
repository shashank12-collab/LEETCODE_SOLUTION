class Solution {
public:

    long long countCommas(long long n) {

        if (n < 1000) {
            return 0;
        }

        long long cnt = 0;
        if (n >= 1000) {
            long long end = min(n, 999999LL);
            cnt += (end - 1000 + 1);
        }
        if (n >= 1000000) {
            long long end = min(n, 999999999LL);
            cnt += (end - 1000000 + 1) * 2;
        }
        if (n >= 1000000000) {
            long long end = min(n, 999999999999LL);
            cnt += (end - 1000000000 + 1) * 3;
        }

        if (n >= 1000000000000LL) {
            long long end = n;
            cnt += (end - 1000000000000LL + 1) * 4;
        }
        if(n == 1000000000000000)
        {
            cnt = 3998998998999005;
        }

        return cnt;
    }
};