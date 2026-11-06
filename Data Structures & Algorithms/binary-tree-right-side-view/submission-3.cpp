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
void levelTraversal(TreeNode* root,vector<pair<int,int>>& values,int c)
{
    if(!root)
        return;
    values.push_back(make_pair(c,root->val));
    levelTraversal(root->left,values,c+1);
    levelTraversal(root->right,values,c+1);
}
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<pair<int,int>>values;
        levelTraversal(root,values,0);
        vector<int>result;
        if(values.empty())
        {
            //result.push_back(nullptr);
            return result;
        }
        std::sort(values.begin(), values.end(), [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
        return a.first < b.first;
    });
        int temp=1;
        auto it = values.begin()+1;
        while(it!=values.end())
        {
            if(it->first != (it-1)->first)
                result.push_back((it-1)->second);
            it++;
        }
        it=(values.end()-1);
        result.push_back(it->second);
        return result;
    }
};
