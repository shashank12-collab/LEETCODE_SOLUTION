class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin() , intervals.end());
        int startNode = intervals[0][0];
        int endNode = intervals[0][1];
        int cnt = 0;

        for(int i = 1 ; i < n ; i++)
        {
            int NewStartNode = intervals[i][0];
            int NewEndNode = intervals[i][1];

            if(endNode > NewStartNode)
            {
                cnt++;
                endNode = min(endNode , NewEndNode);
            }
            else
            {
                endNode = NewEndNode;
            }
        }
        return cnt;
    }
};