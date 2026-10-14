class Solution {
public:

vector<int> findNge(vector<int>& nums2)
{
    int n = nums2.size();
    vector<int>NGE(n);
    stack<int> st;

    for(int i = n-1 ; i >= 0 ; i--)
    {
        while(!st.empty() && st.top() <= nums2[i])
        {
            st.pop();
        }
        if(st.empty())
        {
            NGE[i] = -1;
        }
        else
        {
            NGE[i] = st.top();
        }
        st.push(nums2[i]);
    }
    return NGE;
}
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nge = findNge(nums2);
        unordered_map<int , int> mp;

        for(int i = 0 ; i < nums2.size() ; i++)
        {
            mp[nums2[i]] = nge[i];
        }
        vector<int> ans;
        for(int i = 0 ; i < nums1.size() ; i++)
        {
            ans.push_back(mp[nums1[i]]);
        }
        return ans;
    }
};