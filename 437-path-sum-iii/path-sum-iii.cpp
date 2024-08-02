
class Solution {
public:
    int pathSum(TreeNode* root, int targetSum) {
        if (!root) return 0;

        // Sum paths starting from the root, plus paths from the left and right subtrees
        return countPaths(root, targetSum) + pathSum(root->left, targetSum) + pathSum(root->right, targetSum);
    }

private:
    // Helper function to count paths with a given sum starting from the current node
    int countPaths(TreeNode* node, long long targetSum) {
        if (!node) return 0;

        // Check if the current node completes a path with the target sum
        int paths = (node->val == targetSum) ? 1 : 0;

        // Count paths in the left and right subtrees with the remaining sum
        paths += countPaths(node->left, targetSum - node->val);
        paths += countPaths(node->right, targetSum - node->val);

        return paths;
    }
};