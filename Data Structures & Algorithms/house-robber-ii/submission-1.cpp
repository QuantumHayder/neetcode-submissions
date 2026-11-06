class Solution {
private:
 int rob1(vector<int>&nums)
 {
    if(nums.empty())
            return 0;
        if(nums.size()==1)
            return nums[0];
        int prev = 0;
        int next = 0;

        for(int num : nums)
        {
            int newRob = max(prev+num, next);
            prev=next;
            next=newRob;
        }
        return next;
 }
public:
    int rob(vector<int>& nums) {
        vector<int> nums1(nums.begin(),nums.end()-1);
        vector<int> nums2(nums.begin()+1,nums.end());
        return max(nums[0],max(rob1(nums1),rob1(nums2)));
    }
};

/*vector<pair<int,int>>robbery(nums.size()+1,{0,0});
        robbery[0]=make_pair(nums[0],1);
        if(nums[1]>=nums[0])
            robbery[1]=make_pair(nums[1],0);
        else
            robbery[1]=make_pair(nums[0],1);
        for(int i=2;i<=nums.size();++i)
        { 
            //robbery[i]=max();
            if(robbery[i-1]<nums[i]+ *max_element(robbery.begin(),robbery[i-2]))
            {
                if(max_element(robbery.begin(),robbery[i-2])->second == 1)
                {
                    robbery[i]=make_pair(nums[i]+ *max_element(robbery.begin(),robbery[i-2]),1);
                }
                else
                    robbery[i]=make_pair(nums[i]+ *max_element(robbery.begin(),robbery[i-2]),0);
            }
            else
            {
                robbery[i]=robbery[i-1];
            }
        }
        if(robbery[nums.size()].second==1)
        {
            int maxi =0;
            auto it = max_element(robbery.begin()->first,(robbery.end()-1)->first);
            if(it->second==1)
            {
                auto it2 = robbery.begin();
                while(it2!=robbery.end())
                {
                    if(it2->first>maxi && it2 != it)
                        maxi=it2->first;
                    it2++;
                }
            }
            robbery[robbery.end()-1]=make_pair(maxi+nums[nums.size()-1],0);
        }
        

*/
