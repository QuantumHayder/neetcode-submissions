class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> indices; 
        int n = nums.size();
        int required = -1;

        for (int i = 0; i<n; i++) {
            indices[nums[i]] = i;
        }

        for(int i=0; i<n; ++i)
        {
            required = target - nums[i];
            if(indices.count(required) && indices[required] != i)
                return {i,indices[required]};
        }
       return {};
    }
};
