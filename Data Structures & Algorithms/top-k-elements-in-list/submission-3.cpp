class Solution {
private: 
    static bool cmp(pair<int,int> a, pair<int, int> b)
    {
        return a.second> b.second;
    }
    vector<pair<int,int>> sorted(unordered_map<int, int> M)
    {
        vector<pair<int, int>> A;
        for (auto it: M)
        {
            A.push_back(it);
        }
        sort(A.begin(), A.end(), cmp);
        return A;
    }
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counts;
        int n = nums.size();
        for(auto& no: nums)
        {
            
            counts[no]++;
        }
        vector<pair<int,int>> counts_sorted = sorted(counts);
        vector<int> res;
        for(int i=0; i<k; ++i)
        {
            res.push_back(counts_sorted[i].first);
        }
        return res;
    }
};
