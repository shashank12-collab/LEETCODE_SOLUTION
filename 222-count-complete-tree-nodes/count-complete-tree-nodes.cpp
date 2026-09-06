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
int findnodeleft(TreeNode* root)
{
    int hght = 0;
    while(root)
    {
        hght++;
        root = root->left;
    }
    return hght;
}
int findnoderight(TreeNode* root)
{
    int hght = 0;
    while(root){
        hght++;
        root = root->right;
    }
    return hght;
}
    int countNodes(TreeNode* root) {
       if(root == NULL)
       {
        return 0;
       } 
       int lh = findnodeleft(root);
       int lr = findnoderight(root);
       if(lh == lr)
    {
        return (1 << lh) - 1;
    }
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};