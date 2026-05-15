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
    int gdep = 0;
public:
    void fun(TreeNode* root,int  dep){
        if(!root) return;
        if(!root->left && !root->right){
            gdep = max(gdep,dep);
            return;
        }
        if(root->left) fun(root->left,dep+1);
        if(root->right) fun(root->right,dep+1);
        return;

    }
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        fun(root,0);
        return gdep+1;
    }
};