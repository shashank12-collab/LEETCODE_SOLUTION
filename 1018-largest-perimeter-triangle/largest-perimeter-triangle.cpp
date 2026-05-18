class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        int perimeter = 0;

        sort(nums.begin() , nums.end());
        int a = 0;
        int b = a+1;
        int c = b+1;

        while(c < n)
        {
            if(nums[a] + nums[b] > nums[c])
            {
                perimeter = nums[a] + nums[b] + nums[c];
            }
            a++;
            b++;
            c++;
        }
        return perimeter;
    }
};