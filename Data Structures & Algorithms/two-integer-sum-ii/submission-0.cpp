class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n = nums.size();
        
        for(int i = 0; i<n; ++i)
        {
            int searchable = target - nums[i];
            auto it = find(nums.begin(),nums.end(),searchable);
            if(it!=nums.end())
            {
                int index = distance(nums.begin(),it);
                vector<int> result = {i+1,index+1 };
                sort(result.begin(),result.end());
                return result;
            }
        }
    }
};
