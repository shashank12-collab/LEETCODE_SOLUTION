class Solution {
public:
    vector<int> numToArr(int x) {
        vector<int> ans;

        if(x == 0) return {0};

        while(x != 0)
        {
            int last_digit = x % 10;
            ans.push_back(last_digit);
            x = x / 10;
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }

    bool isPalindrome(int x) {

        if(x < 0) return false;

        vector<int> res = numToArr(x);

        int i = 0;
        int j = res.size() - 1;

        while(i <= j)
        {
            if(res[i] != res[j])
                return false;

            i++;
            j--;
        }

        return true;
    }
};