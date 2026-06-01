class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int duplicate = -1;
        unordered_map<int,int> mpp;
        for(int i = 0 ; i < n ; i++)
        {
            mpp[nums[i]]++;
        }
        //find duplicate
        for(auto it : mpp)
        {
            if(it.second  == 2)
            {
                duplicate = it.first;
            }
        }
       //find missing 
       int missing = -1;
       for(int i = 1 ; i <= n ; i++)
       {
        if(mpp.find(i) == mpp.end())
        {
            missing = i;
        }
       }
       return {duplicate , missing};
    }
};