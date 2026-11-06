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
    
        if(counter->right && counter->left)
        {
            TreeNode* temp = counter->right;
            counter->right = counter->left;
            counter->left = temp;

            TreeNode* right = invertTree(counter->right);
            TreeNode* left = invertTree(counter->left);            }
        else if(counter->right)
        {
            counter->left = counter->right;
            counter->right= nullptr;
            TreeNode* left = invertTree(counter->left);
        }
        else if(counter->left)
        {
            counter->right = counter->left;
            counter->left = nullptr;
            TreeNode* right = invertTree(counter->right);
        }     
    
    return counter;
    }
};
