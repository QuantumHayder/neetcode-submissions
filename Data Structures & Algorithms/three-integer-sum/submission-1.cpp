class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> output = {};
        for (int i=0; i<n; ++i)
        {
            for(int j=i+1; j<n; ++j)
            {
                int req = - (nums[i]+nums[j]);
                vector<int> temp = {};
                for (int k = 0;k<n;++k)
                {
                    if (k != i && k != j)
                    {
                        temp.push_back(nums[k]);
                    }
                }
                auto it1 = find(temp.begin(),temp.end(),req);
                if(it1 != temp.end())
                {
                    vector<int> possible = {nums[i],nums[j], *it1};
                    sort(possible.begin(),possible.end());
                    auto it2 = find(output.begin(),output.end(),possible);
                    if(it2 == output.end())
                        output.push_back(possible);
                }
            }
        }
        return output;
    }
};
