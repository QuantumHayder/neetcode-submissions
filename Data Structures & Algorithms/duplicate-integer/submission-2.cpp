using namespace std;
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        auto ip = std::unique(nums.begin(), nums.end());
        nums.resize(std::distance(nums.begin(), ip));
        int m = nums.size();

        if (n != m)
            return true;
        return false;
    }
};