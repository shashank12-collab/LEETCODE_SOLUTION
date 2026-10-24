/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void solve(TreeNode* root , vector<int>& ans)
    {
        if(root == NULL)
        {
            return;
        }
        solve(root->left , ans);
        ans.push_back(root->val);
        solve(root->right , ans);
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int> ans;
        solve(root , ans);
        int n = ans.size();
        int minval = INT_MAX;
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = i+1 ; j < n ; j++)
            {
                int num = abs(ans[i] - ans[j]);
                minval = min(num , minval);
            }
        }
        return minval;
    }
};