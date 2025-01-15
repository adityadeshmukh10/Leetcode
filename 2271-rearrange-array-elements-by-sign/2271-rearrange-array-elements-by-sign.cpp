class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> pos;
        vector<int> neg;
        vector<int>arr;

        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                pos.push_back(nums[i]);
            }
            else
            {
                neg.push_back(nums[i]);
            }
        }
        for(int i=0;i<n/2;i++)
        {
            arr.push_back(pos[i]);
            arr.push_back(neg[i]);
        }
        nums=arr;
        return nums;
    }
};