class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin() , nums.end());

        int j = n ;
        while(j >= 0)
        {
            if(k == 0)
            {
                return nums[j];
            }
            k--;
            j--;
        }
        return 0;
    }
};