class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int product = 1;
        bool zero_flag = false;
        int zero_count = 0;
        for (int i = 0; i<n; ++i)
        {
            if (nums[i] == 0)
            {
                zero_count ++;
                zero_flag = true;
                continue;
            }
            product *= nums[i];
        }

        vector <int> output(n,product);

        if (zero_count > 1)
        {
            std::fill(output.begin(), output.end(), 0);
            return output;
        }

        if(zero_flag)
        {
            for (int i = 0; i<n; ++i)
            {
                if (nums[i] == 0)
                    continue;
                output[i] = 0;
            }
        }
        else
        {
            for (int i = 0; i<n; ++i)
            {
                if (nums[i] == 0)
                    continue;
                output[i] /= nums[i];
            }
        }
        return output;
    }
};
