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
    void preorder(TreeNode* a,vector<int>&ans)
    {
        if(a == NULL){
            ans.push_back(106);
            return;
        } 

        ans.push_back(a->val);
        preorder(a->left,ans);
        preorder(a->right,ans);

        //rerurn ans;
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int>ans1;
        vector<int>ans2;
        preorder(p,ans1);
        preorder(q,ans2);
        //cout<<ans1<<" "<<ans2;
        return ans1 == ans2;

    }
};