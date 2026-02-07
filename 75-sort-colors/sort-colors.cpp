class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        vector<int> col;

        for(int i = 0 ; i < n ; i++)
        {
            if(nums[i] == 0)
            {
                col.push_back(nums[i]);
            }
        }

        for(int i = 0 ; i < n ; i++)
        {
            if(nums[i] == 1)
            {
                col.push_back(nums[i]);
            }
        }

        for(int i = 0 ; i < n ; i++)
        {
            if(nums[i] == 2)
            {
                col.push_back(nums[i]);
            }
        }
        nums = col;
    }
};