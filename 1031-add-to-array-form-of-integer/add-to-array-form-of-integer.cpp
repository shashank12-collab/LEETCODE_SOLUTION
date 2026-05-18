class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
       int n = num.size(); 
       vector<int> nums;
       vector<int> newarr;

        while(k != 0)
        {
            nums.push_back(k % 10);
            k = k / 10;
        }
        reverse(nums.begin(), nums.end());
       int m = nums.size();
       int i = n-1;
       int j = m-1;
       int carry = 0;

       while(i >= 0 || j >= 0 || carry)
       {
        int sum = carry;
        if(i >= 0)
        {
            sum += num[i];
            i--;
        }
        if(j >= 0)
        {
            sum += nums[j];
            j--;
        }
        newarr.push_back(sum % 10);
        carry = sum / 10;
       }

       reverse(newarr.begin() , newarr.end());       
       return newarr;
    }
};