class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int , int> mpp;
        int maxi = *max_element(nums.begin() , nums.end());
        int mini = *min_element(nums.begin(), nums.end());

        for(int i = mini ; i <= maxi ; i++)
        {
            if(find(nums.begin() , nums.end() , i) == nums.end())
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};