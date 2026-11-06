class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        int n = nums.size();

        if(n==0)
            return 0;

        int longest = 1;

        sort(nums.begin(),nums.end());

        int temp_length = 1;

        for (int i =1; i<n; ++i)
        {
            if(nums[i]-nums[i-1]==1)
            {
                temp_length++;
                if(temp_length>longest)
                    longest = temp_length;
            }
            else if (nums[i]-nums[i-1]==0)
                continue;
            else
            {
                if(temp_length>longest)
                    longest = temp_length;
                temp_length = 1;
            }
        }
        return longest;
        
    }
};
