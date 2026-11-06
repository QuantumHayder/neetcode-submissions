class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> pairs;

        for (int i=0; i< nums.size(); ++i)
        {
            pairs[nums[i]]= i;
        }

        for (int i=0; i< nums.size(); ++i)
        {
            int needed = target - nums[i];
            auto it = pairs.find(needed);
            if (it != pairs.end() && i!= it->second)
                return {i, it->second};
            pairs[nums[i]] = i;
        }
        return {};
    }
};
