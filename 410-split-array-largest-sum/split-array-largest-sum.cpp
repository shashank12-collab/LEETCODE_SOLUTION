class Solution {
public:
int LargestSum(vector<int> &nums , int sum)
{
    int nosplit = 1;
    long long sumSplit = 0;
    int n = nums.size();

    for(int i =0 ; i < n ; i++)
    {
        if(sumSplit + nums[i] <= sum)
        {
            sumSplit += nums[i];
        }

        else
        {
            nosplit++;
            sumSplit = nums[i];
        }
    }
    return nosplit;
}

int Split(vector<int>& nums , int n , int m)
{
    if(m > n) return -1;
    int low = *max_element(nums.begin() , nums.end());
        int high = accumulate(nums.begin() , nums.end() ,0);
        int ans = INT_MIN;

        while(low <= high)
        {
            int mid = (low + high) / 2;

            int noOfSplit = LargestSum(nums , mid);

            if(noOfSplit > m) 
            {
                low = mid +1 ;
            }
            else
            {
                ans = mid;
                high = mid -1 ;
            }
        }
        return ans;
}
    int splitArray(vector<int>& nums, int k) {
        return Split(nums , nums.size() , k);
    }
};