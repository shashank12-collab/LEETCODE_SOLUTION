class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        if(nums.empty()) return {};
        int n = nums.size();
        vector<int> left;
        left.push_back(0);
        int maxl = nums[0];
        if(n == 1)
        {
            return nums;
        }
        for(int i = 1 ; i < n -1 ; i++)
        {
            if(nums[i] >  maxl)
            {
                left.push_back(i);
                maxl = nums[i];
            }
        }

        vector<int> right;
        int maxr = nums[n-1];

        for(int i = n -2 ; i >= 0 ; i--)
        {
             if(nums[i] >  maxr)
            {
                right.push_back(i);
                maxr = nums[i];
            }
        }
        reverse(right.begin() , right.end());
        int m = right.size();

        for(int i = 0 ; i < m ; i++)
        {
            if(find(left.begin() , left.end() ,right[i]) == left.end())
            {
                left.push_back(right[i]);
            }
        }

        left.push_back(n-1);

        sort(left.begin(), left.end());

        vector<int> ans;

        for(int i = 0; i < left.size(); i++) {
            ans.push_back(nums[left[i]]);
        }

        return ans;
    }
};