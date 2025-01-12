class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(nums[i]==0 && nums[j]==2)
                {
                    swap(nums[i],nums[j]);
                }
                if(nums[i]==1 && nums[j]==2)
                {
                    swap(nums[i],nums[j]);
                }
                if(nums[i]==0 && nums[j]==1)
                {
                    swap(nums[i],nums[j]);
                }
            }
        }
    }
};