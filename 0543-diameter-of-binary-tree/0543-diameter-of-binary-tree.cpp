class Solution {
public: 
    int getHeight(TreeNode* root, int &maxDiameter) {
        if (root == nullptr) {
            return 0;
        }
        
        int lh = getHeight(root->left, maxDiameter);
        int rh = getHeight(root->right, maxDiameter);
        
        maxDiameter = max(maxDiameter, lh + rh);
        
        return 1 + max(lh, rh);
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        int maxDiameter = 0;
        getHeight(root, maxDiameter);
        return maxDiameter;
    }
};
