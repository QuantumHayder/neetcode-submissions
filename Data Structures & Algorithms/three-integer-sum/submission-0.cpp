class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> output = {};
        for (int i=0; i<n; ++i)
        {
            for(int j=i+1; j<n; ++j)
            {
                for (int k=j + 1;k<n; ++k )
                {
                    if (nums[i] + nums[j] + nums[k] == 0)
                    {
                        vector<int> possible = {nums[i], nums[j] ,nums[k]};
                        sort(possible.begin(),possible.end());
                        auto it = find(output.begin(),output.end(),possible);
                        if(it == output.end())
                            output.push_back(possible);
                    }
                }
            }
        }
        return output;
    }
};
