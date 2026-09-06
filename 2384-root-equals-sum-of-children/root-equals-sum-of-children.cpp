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
    bool checkTree(TreeNode* root) {
        int total = 0;
        if(root == NULL)
        {
            return true;
        }
        if(root->left != NULL)
        {
            total += root->left->val;
        }
        if(root->right != NULL)
        {
            total += root->right->val;
        }
        if(total == root->val)
        {
            return true;
        }
        return false;
    }
};