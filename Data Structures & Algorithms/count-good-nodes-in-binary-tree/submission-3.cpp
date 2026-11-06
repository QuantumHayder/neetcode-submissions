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
void helpGoody(TreeNode* root, int maxi,int& count)
{
    if(!root)
        return;
    if(root->left && (root->left)->val>=maxi)
    {
        count++;
        //maxi=(root->left)->val;
        helpGoody(root->left,(root->left)->val,count);
    }
    else
    {
        helpGoody(root->left,maxi,count);
    }

    if(root->right && (root->right)->val>=maxi)
    {
        count++;
        //maxi=(root->right)->val;
        helpGoody(root->right,(root->right)->val,count);
    }
    else
    {
        helpGoody(root->right,maxi,count);
    }
}
public:
    int goodNodes(TreeNode* root) {

        if(!root)
            return 0;

        int counter=1;
        int maxi = root->val;

        helpGoody(root,maxi,counter);

        return counter;
    }
};
