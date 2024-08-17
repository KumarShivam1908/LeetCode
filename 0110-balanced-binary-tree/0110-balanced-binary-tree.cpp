class Solution {
public:
    int getHeight(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        int lh = getHeight(root->left);
        int rh = getHeight(root->right);

        return 1 + max(lh, rh);
    }

    bool isBalanced(TreeNode* root) {
        if (root == nullptr) {
            return true;
        }
        
        int leftHeight = getHeight(root->left);
        int rightHeight = getHeight(root->right);
        
        // Check the current node's balance and recursively check subtrees
        if (abs(leftHeight - rightHeight) <= 1 &&
            isBalanced(root->left) && 
            isBalanced(root->right)) {
            return true;
        }
        
        return false;
    }
};
