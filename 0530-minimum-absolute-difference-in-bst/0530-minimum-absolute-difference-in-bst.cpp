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
    int ans=INT_MAX,prev=INT_MIN;
    void inord(TreeNode* tmp) {
        if(tmp==NULL) {
            return ;
        }
        inord(tmp->left);
        if(prev>=0) {
            ans = min(ans,tmp->val-prev);
        }
        prev = tmp->val;
        inord(tmp->right);
    }
    int getMinimumDifference(TreeNode* root) {
        inord(root);
        return ans;
    }
};