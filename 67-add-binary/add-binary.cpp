class Solution {
public:
    string addBinary(string a, string b) {
        int n1 = a.length();
        int n2 = b.length();

        int i = n1 -1;
        int j = n2 - 1;
        int carry = 0;
        
        string res = "";

        while(i >= 0 || j >= 0 || carry)
        {
            int sum = carry;
            if(i >= 0)
            {
                sum += a[i] - '0';
                i--;
            }

            if(j >= 0)
            {
                sum += b[j] - '0';
                j--;
            }
            
            res += (sum % 2) + '0';
            carry = sum / 2;
        }
        reverse(res.begin() , res.end());
        return res;
    }
};