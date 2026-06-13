class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // unordered_set<int> st;
        // int n = nums.size();
        // for (int i = 0 ; i < n ; i++) {
        //     if (st.find(nums[i]) != st.end()) {
        //         return nums[i]; 
        //     }
        //     else
        //     {
        //     st.insert(nums[i]);
        // }
        // }
        // return -1; 

        //using slow and fast pointer 
        int slow  = 0;
        int fast = 0;
        while(true)
        {
            slow = nums[slow];
            fast = nums[fast];
            fast = nums[fast];
            if(slow == fast)
            {
                slow = 0;
                while(slow != fast)
                {
                    slow = nums[slow];
                    fast = nums[fast];
                }
                return slow;
            }
        }
        return -1;
    }
};
