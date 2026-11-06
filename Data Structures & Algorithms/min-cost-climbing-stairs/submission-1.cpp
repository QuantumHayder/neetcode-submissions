class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int one=0;
        int two=0;
        for(int i=2;i<=cost.size();++i)
        {
            int temp=two;
            two=min(one+cost[i-2],two+cost[i-1]);
            one=temp;
        }
        return two;
    }
};
