class Solution {
public:
    string add(string num1, string num2) {
        int ind1 = num1.size() - 1;
        int ind2 = num2.size() - 1;
        int sum = 0;
        int carry = 0;
        string ans;

        while (ind1 >= 0 && ind2 >= 0) {
            sum = ((num1[ind1] - '0') + (num2[ind2] - '0') + carry);
            carry = sum / 10;
            char c = '0' + (sum % 10);
            ans += c;
            ind1--;
            ind2--;
        }

        while (ind2 >= 0) {
            sum = (num2[ind2] - '0') + carry;
            carry = sum / 10;
            ans += (sum % 10) + '0';
            ind2--;
        }

        while (ind1 >= 0) {
            sum = (num1[ind1] - '0') + carry;
            carry = sum / 10;
            ans += (sum % 10) + '0';
            ind1--;
        }

        if (carry) {
            ans += '1';
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }

    string addStrings(string num1, string num2) {
        if (num1.size() > num2.size()) {
            return add(num1, num2);
        } else {
            return add(num2, num1);
        }
    }
};