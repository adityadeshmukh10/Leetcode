class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v = {-1,-1};
        int n = nums.size();

        for(int i=0;i<n;i++)
        {
            if(nums[i]==target)
            {
                v[0]=i;
                break;
            }
            
        }
        for(int j=n-1;j>=0;j--)
        {
            if(nums[j]==target)
            {
                v[1]=j;
                break;
            }
        }
        return v;
    }
};