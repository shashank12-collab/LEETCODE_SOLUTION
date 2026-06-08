class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
      int n = nums.size();
      vector<int>small;
      vector<int>equal;
      vector<int>large;
      vector<int>result;
      for(int i = 0 ; i < n ; i++)
      {
        if(nums[i] < pivot)
        {
            small.push_back(nums[i]);
        }
        else if(nums[i] == pivot)
        {
            equal.push_back(nums[i]);
        }
        else
        {
            large.push_back(nums[i]);
        }
      }
      int i = 0;
      int j = 0;
      int k = 0;

      while(i < small.size())
      {
        result.push_back(small[i]);
        i++;
      }
      while(j < equal.size())
      {
        result.push_back(equal[j]);
        j++;
      }
      while(k < large.size())
      {
        result.push_back(large[k]);
        k++;
      }
      return result;
    }
};