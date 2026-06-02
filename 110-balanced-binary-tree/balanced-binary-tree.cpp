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
    int Depth(TreeNode* root)
    {
        if(root == NULL) return 0;

        int lh = Depth(root->left);
        int rh = Depth(root->right);

        if(lh == -1) return -1;
        if(rh == -1) return -1;

        if(abs(lh-rh)>1) return -1;
       // ans = rh-lh;
        return max(lh,rh)+1;
    }

    bool isBalanced(TreeNode* root) {
        return Depth(root) != -1;
    }
};