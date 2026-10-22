class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans;
        // int First = -1;
        // int Last = -1;

        // for(int i = 0 ; i < n ; i++)
        // {
        //     if(nums[i] == target)
        //     {
        //         if(First == -1)
        //         {
        //         First = i;
        //         }
        //         Last = i;
        //     }
        // }
        // ans.push_back(First);
        // ans.push_back(Last);

        int low = 0;
        int high = n-1;
        int first = -1;
        int last = -1;
        while(low <= high)
        {
            int mid = (low + high) / 2;

            if(nums[mid] == target)
            {
               first = mid;
               high = mid -1;
            }
            else if(nums[mid] < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid-1;
            }
        }
        ans.push_back(first);

        low = 0;
        high = n-1;
        while(low <= high)
        {
            int mid = (low + high) / 2;
            if(nums[mid] == target)
            {
                last = mid;
                low = mid + 1;
            }
            else if(nums[mid] < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid-1;
            }
        }

        ans.push_back(last);
        return ans;
    }
};