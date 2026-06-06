class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
       int n = nums.size();
       vector<int>left;
       vector<int>right;
       vector<int>answer;

       for(int i = 0 ; i < n ; i++)
       {
        int leftsum = 0;
        for(int j = 0 ; j < i ; j++)
        {
            leftsum += nums[j];
        }
        left.push_back(leftsum);
       } 

       for(int i = 0 ; i < n ; i++)
       {
        int rightsum = 0;
        
        for(int j = i+1 ; j < n ; j++)
        {
            rightsum += nums[j];
        }
        right.push_back(rightsum);
       }
        for(int i = 0 ; i < n ; i++)
        {
            answer.push_back(abs(left[i] - right[i]));
        }
       return answer;
    }
};