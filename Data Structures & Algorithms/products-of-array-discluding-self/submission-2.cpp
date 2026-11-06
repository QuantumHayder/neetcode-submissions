class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int product = 1;
        vector<int> zero_indices = {};

        bool arrayofzeros=true;
        for(int i:nums)
        {
            if(i!=0)
            {
                arrayofzeros=false;
                break;
            }
        }
        if(arrayofzeros)
        {
            vector<int> output(n,0);
            return output;
        }

        for(int i=0;i<n; ++i)
        {
            if(nums[i]!=0)
                product *= nums[i];
            else
            {
                zero_indices.push_back(i);
            }
        }

        vector<int>output = {};
        if(zero_indices.empty())
        {
            for(int i=0;i<n;++i)
            {
                output.push_back(product/nums[i]);
            }
            return output;
        }
        else if(zero_indices.size()==1)
        {
            for(int i=0;i<n;++i)
            {
                auto it = find(zero_indices.begin(), zero_indices.end(), i);
                if(it != zero_indices.end())
                    output.push_back(product);
                else
                    output.push_back(0);
            }
            return output;
        }
        else
        {
            vector<int>zeros(n,0);
            return zeros;
        }
    }
};
