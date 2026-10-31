class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> positive;
        vector<int> negative;

        for(int i = 0 ; i < n ; i++)
        {
            if(nums[i] > 0)
            {
                positive.push_back(nums[i]);
            }
            else
            {
                negative.push_back(nums[i]);
            }
        }

        int i = 0;
        int j = 0;
        vector<int> temp;
        while(i < positive.size() && j < negative.size())
        {
            temp.push_back(positive[i]);
            i++;
            temp.push_back(negative[j]);
            j++;
        }
        return temp;
    }
};