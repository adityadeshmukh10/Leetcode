class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> v;
        for(int i=0;i<nums.size();i++)
        {
            if(v.size()==0 || v[0]!=nums[i])
            {
                int k = nums[i];
                int count=0;
                for(int j=0;j<nums.size();j++)
                {
                    if(nums[j]==k)
                    {
                        count++;
                    }
                }
                if(count>nums.size()/3)
                {
                    v.push_back(k);
                }
            }
            if(v.size()==2)
            {
                break;
            }
        }
        return v;
    }
};