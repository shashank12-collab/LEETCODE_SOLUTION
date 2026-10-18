class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        int startNode = intervals[0][0];
        int endNode = intervals[0][1];
        for (int i = 1; i < n; i++) {
            int NewstartNode = intervals[i][0];
            int NewendNode = intervals[i][1];

            if (endNode >= NewstartNode) {
                endNode = max(endNode, NewendNode);
            } else {
                ans.push_back({startNode, endNode});
                startNode = NewstartNode;
                endNode = NewendNode;
            }
        }
        ans.push_back({startNode, endNode});
        return ans;
    }
    vector<vector<int>> insert(vector<vector<int>>& intervals,
                               vector<int>& newInterval) {
        vector<vector<int>> ans;
        int n = intervals.size();
        for (int i = 0; i < n; i++) {
            ans.push_back(intervals[i]);
        }
        ans.push_back(newInterval);
        return merge(ans);
    }
};