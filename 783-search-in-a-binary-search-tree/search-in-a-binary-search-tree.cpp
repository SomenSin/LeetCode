class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        return search(root,val);
    }
    TreeNode* search(TreeNode* root, int val) {
        if(!root) {
            return NULL;
        }
        if(root->val==val) {
            return root;
        }
        TreeNode *node ;
        if(root->val > val) {
            node = search(root->left,val);
        }
        else {
            node = search(root->right,val);
        }

        return node;
    }

};