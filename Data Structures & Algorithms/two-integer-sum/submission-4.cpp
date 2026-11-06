class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> maped;
        for (int i=0; i< nums.size(); ++i)
        {
            maped.push_back({nums[i], i});
        }

        sort(maped.begin(), maped.end());

        int i=0; int j= nums.size()-1;

        while(i<j)
        {
            int res = maped[i].first + maped[j].first;
            if (res == target)
                return {min(maped[i].second, maped[j].second), max(maped[i].second, maped[j].second)};
            else if (res<target)
                i++;
            else
                j--;
        }
    }
};
