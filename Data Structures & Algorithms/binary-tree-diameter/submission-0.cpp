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
private:
   int width=0;
public:
int DFS(TreeNode* root)
{
    if(root==0)
       return 0;
    int left=DFS(root->left);
    int right=DFS(root->right);
    width=max(width,left+right);
    return max(left,right)+1;

}
    int diameterOfBinaryTree(TreeNode* root) {
       int h= DFS(root);
       return width;
    }
};
