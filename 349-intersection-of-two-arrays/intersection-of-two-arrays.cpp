class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        unordered_set<int> st;
        sort(nums1.begin() , nums1.end());
        sort(nums2.begin() , nums2.end());

        int i = 0 ; 
        int j = 0;

        while(i < n && j < m)
        {
            if(nums1[i] == nums2[j])
            {
                st.insert(nums1[i]);
                i++;
                j++;
            }
            else if(nums2[j] > nums1[i])
            {
                i++;
            }
            else
            {
                j++;
            }
        }
        vector<int> v(st.begin(), st.end());
        return v;
    }
};