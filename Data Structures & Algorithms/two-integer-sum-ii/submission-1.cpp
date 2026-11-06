class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int l = nums.size()-1;
        int f = 0;
        while(nums[f]+nums[l] != target)
        {
            if(nums[f]+nums[l]>target)
                l--;
            else if (nums[f]+nums[l]<target)
                f++;
        }
        return {f+1,l+1};
    }
};
