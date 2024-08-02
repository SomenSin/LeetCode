
class Solution {
public:
    int longestZigZag(TreeNode* root) {
        if (!root) {
            return 0;
        }
        int maxLength = 0;
        dfs(root, true, 0, maxLength);  // Start by going left
        dfs(root, false, 0, maxLength); // Start by going right

        return maxLength;
    }

private:
    void dfs(TreeNode* root, bool isLeft, int length, int &maxLength) {
        if (!root) {
            return;
        }
        maxLength = max(length, maxLength); 
        if (isLeft) {
            dfs(root->left, false, length + 1, maxLength); // Continue zigzag by going left
            dfs(root->right, true, 1, maxLength);          // Change direction to right, reset length
        } else {
            dfs(root->right, true, length + 1, maxLength); // Continue zigzag by going right
            dfs(root->left, false, 1, maxLength);          // Change direction to left, reset length
        }
    }
};