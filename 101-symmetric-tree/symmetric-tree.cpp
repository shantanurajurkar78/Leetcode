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
    bool isSymetricHelp(TreeNode* Left,TreeNode * Right){
        if(Left == NULL || Right == NULL) return Left == Right;

        if(Left->val != Right->val) return false;

        return isSymetricHelp(Left->left,Right->right) && isSymetricHelp(Left->right,Right->left);
    }

    bool isSymmetric(TreeNode* root) {
        return root == NULL || isSymetricHelp(root->left,root->right);
    }
};