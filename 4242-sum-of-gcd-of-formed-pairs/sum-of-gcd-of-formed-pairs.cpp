class Solution {
public:
    long long gcdSum(vector<int>& nums) {
      int n = nums.size();
      int maximum = INT_MIN;
      vector<int> prefixGcd;
      for(int i = 0 ; i < n ; i++)
      {
        maximum = max(maximum , nums[i]);
        int preGcd = gcd(nums[i] , maximum);
        prefixGcd.push_back(preGcd);
      }
        sort(prefixGcd.begin() , prefixGcd.end());

      int i = 0 ; 
      int j = n-1;
      long long sum = 0;
      while(i < j)
      {
        int newGcd = gcd(prefixGcd[i] , prefixGcd[j]);
        sum += newGcd;
        i++;
        j--;
      }
      return sum;
    }
};