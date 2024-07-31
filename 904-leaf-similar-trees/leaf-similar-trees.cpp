
class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        string left = "", right = "";
        dfs(root1, left);
        dfs(root2, right);
        // cout << left << endl << right; // For debugging, can be removed
        return left == right;
    }
    
private:
    void dfs(TreeNode* root, string &nodes) {
        if (!root) {
            return;
        }
        if (!root->left && !root->right) {
            nodes += to_string(root->val)+'#';
        }
        dfs(root->left, nodes);
        dfs(root->right, nodes);
    }
};