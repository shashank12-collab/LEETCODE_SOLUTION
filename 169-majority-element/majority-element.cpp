class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int num = n / 2;
        unordered_map<int,int> mpp;
        for(int i = 0 ; i < n ; i++)
        {
            mpp[nums[i]]++;
        }
        for(auto it : mpp)
        {
         if(it.second > num)
         {
            return it.first;
         }
        }
        return 0;
    }
};