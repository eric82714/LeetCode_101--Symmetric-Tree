/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;
        else return isMirror(root->left, root->right);
    }
    
    bool isMirror(TreeNode* p, TreeNode* q) {
        if(p == NULL and q == NULL) return true;
        else if(p == NULL or q == NULL) return false;
        else if(p->val != q->val) return false;
        else return isMirror(p->left, q->right) and isMirror(p->right, q->left);
    }
};
