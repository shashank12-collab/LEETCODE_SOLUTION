class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int lsum = 0;
        int rindex = n -1 ;
        int rsum = 0;
        int maxsum = 0;

        for(int i = 0 ; i < k ; i++)
        {
            lsum = lsum + cardPoints[i];
        }
            maxsum = lsum;
        for(int i = 0 ; i < k ; i++)
        {
            lsum = lsum - cardPoints[k-1-i];
            rsum = rsum + cardPoints[rindex];
            rindex = rindex - 1;
            maxsum = max(maxsum , lsum + rsum);
        }
        return maxsum;
    }
};