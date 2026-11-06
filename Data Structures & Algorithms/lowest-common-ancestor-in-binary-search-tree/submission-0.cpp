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
    void getPath(TreeNode* root,TreeNode* value, vector<TreeNode*>& result)
    {
        TreeNode* temp=root;
        while(temp && temp->val!=value->val)
        {
        if(value->val<temp->val)
        {
            result.push_back(temp);
            temp=temp->left;
        }
        else
        {
           result.push_back(temp);
           temp=temp->right;
        }
        }
        result.push_back(temp);        
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> pPath;
        vector<TreeNode*> qPath;
        getPath(root,p,pPath);
        getPath(root,q,qPath);
        
        for(int i=pPath.size()-1;i>=0;i--)
        {
            for(int j=qPath.size()-1;j>=0;j--)
            {
                if(qPath[j]->val==pPath[i]->val)
                {
                   return qPath[j];
                }
            }
        }
        return nullptr;

    }
};
