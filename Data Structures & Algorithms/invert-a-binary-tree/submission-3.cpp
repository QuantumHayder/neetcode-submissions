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
    TreeNode* invertTree(TreeNode* root) {
        TreeNode* counter = root;
        if(root == nullptr)
            return root;
    
        TreeNode* temp = counter->right;
        counter->right = counter->left;
        counter->left = temp;

        TreeNode* right = invertTree(counter->right);
        TreeNode* left = invertTree(counter->left); 
        
        return counter;           
    }
        
};

