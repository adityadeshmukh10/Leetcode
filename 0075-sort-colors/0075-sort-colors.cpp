class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0,j=0,k=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                l++;
            }
            else if(nums[i]==1)
            {
                j++;
            }
            else
            {
                k++;
            }
        }
        for(int p=0;p<l;p++)
        {
            nums[p]=0;
        }
        for(int m=l;m<l+j;m++)
        {
            nums[m]=1;
        }
        for(int v=l+j;v<l+j+k;v++)
        {
            nums[v]=2;
        }
    }
};