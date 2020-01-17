//https://leetcode.com/problems/sum-of-left-leaves/
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
    int summ=0;
    
    void sum(bool flag,TreeNode* root)
        
    {
        if(!root)
            return;
        
        if(root)
            
            if(root->left==NULL &&
               root->right==NULL && 
               flag)
                
                summ+=root->val;
        
        sum(true,root->left);
        
        sum(false,root->right); 
        
    }
    
    int sumOfLeftLeaves(TreeNode* root) 
        
    {
        sum(false,root);
        
        return summ;
    }
    
};
