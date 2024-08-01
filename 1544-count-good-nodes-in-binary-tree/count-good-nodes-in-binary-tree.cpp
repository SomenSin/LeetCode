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
    int goodNodes(TreeNode* root) {
        return dfs(root,INT_MIN);
    }
    int dfs(TreeNode* root,int greatest) {
        if(!root) {
            return 0;
        }
        int ans = (root->val >= greatest)?1:0;
        greatest = max(greatest,root->val);
        
        ans += dfs(root->left,greatest);
        ans += dfs(root->right,greatest);

        return ans;
    }

};