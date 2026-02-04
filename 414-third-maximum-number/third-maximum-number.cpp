class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        set<int>s;
        for(int i = 0 ; i < n ; i++)
        {
            s.insert(nums[i]);
        }
        if(s.size() < 3)
            return *s.rbegin();

        int k = s.size();
        int cnt = 0;

        for(auto it = s.begin(); it != s.end(); it++)
        {
            if(cnt == k - 3)
                return *it;
            cnt++;
        }
        return -1;
    }
};