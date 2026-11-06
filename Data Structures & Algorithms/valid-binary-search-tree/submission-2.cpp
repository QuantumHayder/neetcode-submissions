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
void isAsc(TreeNode* root, vector<int>& values)
{
    if(!root)
        return;
    isAsc(root->left,values);
    values.push_back(root->val);
    isAsc(root->right,values);
}
public:
    bool isValidBST(TreeNode* root) {
        vector<int>values;
        isAsc(root,values);
        bool sorted=true;
        for(int i=0;i<values.size()-1;++i)
        {
            for(int j=i+1;j<values.size();++j)
            {
                if(values[j]<=values[i])
                {
                    sorted=false;
                    break;
                }
            }
            if(!sorted)
                break;
        }
        /*if(is_sorted(values.begin(),values.end()))
            return true;
        return false;*/ // will not work because of >= && <=
        return sorted;
    }
};
