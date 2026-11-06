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
    void level(TreeNode* root,int c ,vector<pair<int,int>>& temp)
    {
        if(root==nullptr)
           return;
           
        temp.push_back(make_pair(c,root->val));
        level(root->left,c+1,temp);
        level(root->right,c+1,temp);
    }
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        int c=0;
        vector<pair<int,int>> temp;
        level(root,c,temp);
        
        int lastLevel=-1;
        for( auto pair=temp.begin(); pair!=temp.end();++pair)
        {
            if(pair->first<=lastLevel)
               result[pair->first].push_back(pair->second);
            else
            {
                lastLevel++;
                result.push_back({});
                result[pair->first].push_back(pair->second);
            }
        }
        return result;
    }
};
