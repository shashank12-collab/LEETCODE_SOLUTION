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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root == NULL) {
            return ans;
        }
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            vector<int> res;
            int size = q.size();

            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();

                res.push_back(node->val);

                if (node->left != NULL) {
                    q.push(node->left);
                }
                if (node->right != NULL) {
                    q.push(node->right);
                }
            }
            ans.push_back(res);
        }
        return ans;
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if(root == NULL)
        {
            return ans;
        }
        vector<vector<int>> res = levelOrder(root);
        int n = res.size();
        for(int i = 0 ; i < n ; i++)
        {
            int m = res[i].size();
            ans.push_back(res[i][m - 1]);
        }
        return ans;
    }
};