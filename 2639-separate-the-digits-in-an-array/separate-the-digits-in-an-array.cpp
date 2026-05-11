class Solution {
public:
    vector<int> seprate(int n)
    {
        vector<int> ans;
        while(n > 0)
        {
            int lastdigit = n % 10;
            ans.push_back(lastdigit);
            n = n/10;
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
    vector<int> separateDigits(vector<int>& nums) {
        int n = nums.size();
        vector<int> newarray;
        for(int i = 0 ; i < n ; i++)
        {
           vector<int> temp = seprate(nums[i]);

           for(int x : temp)
           {
            newarray.push_back(x);
           }
        } 
        return newarray;
    }
};