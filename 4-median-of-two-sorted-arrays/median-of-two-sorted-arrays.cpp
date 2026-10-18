class Solution {
public:
    vector<int> merge(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int i = 0;
        int j = 0;
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] <= nums2[j]) {
                ans.push_back(nums1[i]);
                i++;
            } else {
                ans.push_back(nums2[j]);
                j++;
            }
        }
        while (i < nums1.size()) {
            ans.push_back(nums1[i]);
            i++;
        }
        while (j < nums2.size()) {
            ans.push_back(nums2[j]);
            j++;
        }
        return ans;
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res = merge(nums1 , nums2);
        int n = res.size();
        int median = 0;
        if(n % 2 != 0)
        {
           return median = res[n / 2];
        }
        else
        {
           return ((long long)res[n / 2 - 1] + res[n / 2]) / 2.0;
        }
    }
};