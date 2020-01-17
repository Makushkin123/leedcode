//https://leetcode.com/problems/search-in-a-binary-search-tree/
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
    TreeNode* searchBST(TreeNode* root, int val) {
        
        if(!root) {
            
            return NULL;
        }
        
        if(root->val ==val){
            
        return root;
            
       }
        else
            
            if(val < root->val){
                
          root = searchBST(root->left,val);
                
                
             }else{
                
              root = searchBST(root->right,val);
                
                }
 
 
            return root;
    }
};
