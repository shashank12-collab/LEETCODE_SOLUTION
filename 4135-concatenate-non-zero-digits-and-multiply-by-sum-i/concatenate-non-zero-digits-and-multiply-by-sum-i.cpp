class Solution {
public:
    vector<int> numToArr(int n)
    {
        vector<int> ans;
        while (n >= 1)
        {
            int last_digit = n % 10;
            ans.push_back(last_digit);
            n = n / 10;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }

    long long ArrToNum(vector<int>& num)
    {
        long long nums = 0;
        for (int digit : num)
        {
            nums = nums * 10 + digit;
        }
        return nums;
    }

    long long sumAndMultiply(int n)
    {
        long long sum = 0;
        vector<int> newarr;

        vector<int> num = numToArr(n);

        for (int i = 0; i < num.size(); i++)
        {
            if (num[i] != 0)
            {
                newarr.push_back(num[i]);
                sum += num[i];
            }
        }

        long long number = ArrToNum(newarr);

        return number * sum;
    }
};