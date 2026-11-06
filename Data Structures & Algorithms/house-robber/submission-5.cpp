class Solution {
public:
    int rob(vector<int>& nums) {
       if(nums.size()==0)
          return 0;
        if(nums.size()<2)
          return nums[0];
        if(nums.size()<3)
          return max(nums[0],nums[1]);
        vector<int>robbery;
        robbery.push_back(nums[0]);
        robbery.push_back(max(nums[0],nums[1]));
        for(int i=2;i<nums.size();++i)
        {
            robbery.push_back(max(nums[i]+robbery[i-2],robbery[i-1]));
        }
        return robbery[nums.size()-1];
    }
        
};
