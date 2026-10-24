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
    void solve(TreeNode* root , string path , vector<string>& ans)
    {
        if(root == NULL)
        {
            return ;
        }
        path += to_string(root->val);
        if(root->left == NULL &&  root->right == NULL)
        {
            ans.push_back(path);
            return;
        }

        solve(root->left , path , ans);
        solve(root->right , path , ans);
    }

    int  sum(TreeNode* root)
    {
        vector<string> ans;
        int sum = 0;
        solve(root, "", ans);
        vector<int> res;
        for(auto it : ans)
        {
            int number = stoi(it);
            res.push_back(number);
        }
        for(int i = 0 ; i < res.size() ; i++)
        {
         sum += res[i];
        }
        return sum;
    }
    int sumNumbers(TreeNode* root) {
        return sum(root);
    }
};