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
    void inorder(TreeNode* root , vector<int>& ans)
    {
        if(root == NULL)
        {
            return ;
        }
        ans.push_back(root->val);
        inorder(root->left , ans);
        inorder(root->right , ans);
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == NULL)
        {
            return NULL;
        }
        while(root != NULL && root->val != val)
        {
            if(root->val > val)
            {
                root = root->left;
            }
            else
            {
                root = root->right;
            }
        }
        return root;
    }
};