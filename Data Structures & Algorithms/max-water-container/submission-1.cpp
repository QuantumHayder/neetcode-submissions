class Solution {
public:
    int maxArea(vector<int>& heights) {
        //Area = min(height[i], height[j]) * (j - i)
        int n = heights.size();
        int i = 0;
        int j = n-1;
        int area = -1;
        while(i<j)
        {
            if (min(heights[i],heights[j])*(j-i)>area)
                area = min(heights[i],heights[j])*(j-i);

           if(heights[i]<heights[j])
                i++;
           else
                j--;
        }
        return area;
    }
};
