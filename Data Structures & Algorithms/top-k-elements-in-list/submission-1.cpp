class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> counts;
        for (int i = 0; i<n; ++i)
        {
            counts[nums[i]] += 1;
        }

        vector<int> output = {};
        for (int i = 0; i<k; ++i)
        {
            int max = -1;
            int target = -1;
            for (auto j: counts)
            {
                if (j.second > max)
                {
                    max = j.second;
                    target = j.first;
                }
            }
            output.push_back(target);
            counts.erase(target);
        }
        return output;
    }
};
