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
    int height(TreeNode* root) {
        if (root == nullptr)
            return 0;
        
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        
        return 1 + max(leftHeight, rightHeight);
    }
    
    bool isBalanced(TreeNode* root) {
        if (root == nullptr)
            return true;
        
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        
        // Check if the difference in height between left and right subtrees
        // is at most 1, and both subtrees are also height-balanced
        return abs(leftHeight - rightHeight) <= 1 && 
               isBalanced(root->left) && 
               isBalanced(root->right);
    }
};
