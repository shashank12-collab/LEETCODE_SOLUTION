class Solution {
public:
    vector<int> NumToArr(int n)
    {
        vector<int> arr;
        while (n >= 1)
        {
            int last_digit = n % 10;
            arr.push_back(last_digit);
            n /= 10;
        }
        reverse(arr.begin(), arr.end());
        return arr;
    }

    vector<int> selfDividingNumbers(int left, int right) {

        vector<int> num;

        for (int i = left; i <= right; i++)
        {
            vector<int> ans = NumToArr(i);

            int j;
            for (j = 0; j < ans.size(); j++)
            {
                if (ans[j] == 0 || i % ans[j] != 0)
                    break;
            }

            if (j == ans.size())
                num.push_back(i);
        }

        return num;
    }
};