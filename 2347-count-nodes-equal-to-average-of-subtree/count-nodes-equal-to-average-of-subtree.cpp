/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
int ans = 0;
    int TreeSum(TreeNode* root) {
        int sum = 0;

        if (root == NULL) {
            return 0;
        }
        int left = TreeSum(root->left);
        int right = TreeSum(root->right);
        return left + right + root->val;
    }
    int countNodes(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
    void solve(TreeNode* root) {
        if (root == NULL) {
            return;
        }
        int sum = TreeSum(root);
        int count = countNodes(root);
        if (root->val == sum / count) {
            ans++;
        }
        solve(root->left);
        solve(root->right);
    }
    int averageOfSubtree(TreeNode* root) {
        solve(root);
        return ans;
    }
};