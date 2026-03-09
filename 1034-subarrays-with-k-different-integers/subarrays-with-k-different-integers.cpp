class Solution {
public:
    int subarraywithlessthenk(vector<int>& nums , int k)
    {
        int n = nums.size();
        int l = 0 ; 
        int r = 0;
        int cnt = 0;
        map<int , int> mpp;

        while(r < n)
        {
            mpp[nums[r]]++;

            while(mpp.size() > k)
            {
                mpp[nums[l]]--;

                if(mpp[nums[l]] == 0)
                {
                    mpp.erase(nums[l]);
                }
                l= l + 1 ;
            }
            cnt = cnt + (r - l + 1);
            r = r + 1;
        }
        return cnt;
    }

    int subarraywithlessthenkminusone(vector<int>& nums , int k)
    {
        k = k - 1;
        int l = 0;
        int r = 0;
        int cnt = 0;
        map<int , int> mpp;
        int n = nums.size();

        while(r < n)
        {
            mpp[nums[r]]++;

            while(mpp.size() > k)
            {
                mpp[nums[l]]--;
                
                if(mpp[nums[l]] == 0)
                {
                    mpp.erase(nums[l]);
                }
                l = l + 1 ;
            }
            cnt = cnt + (r - l + 1);
            r = r + 1;
        } 
        return cnt;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
      return  subarraywithlessthenk(nums , k) - subarraywithlessthenkminusone(nums , k);
    }
};