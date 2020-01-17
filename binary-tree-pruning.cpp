//https://leetcode.com/problems/binary-tree-pruning/
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
    TreeNode* pruneTree(TreeNode* root) {
        
        return getTree(root);
    }
    
    TreeNode* getTree(TreeNode*& root){
        
        if(!root)
            
            return NULL;
        
        root->right = getTree(root->right);
        
        root->left = getTree(root->left);
        
        
        if(root->val == 0 && root->left == NULL && root->right == NULL)
            
        {
            
            return NULL;
        }
        
        return root;
    }
};
        
       
