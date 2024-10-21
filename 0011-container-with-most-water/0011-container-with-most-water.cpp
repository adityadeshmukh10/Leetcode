class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size()-1;
        int i=0;
        int j=n;
        int maxi = 0;

        while(i<j)
        {
            int w = (j-i);
            int h = min(height[i],height[j]);
            int fill = w*h;
            maxi = max(maxi,fill);
            if(height[i]>height[j])
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return maxi;
    }
};