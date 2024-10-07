class Solution {
public:
    bool canJump(vector<int>& nums) {
        int finalpos = nums.size()-1;

        for(int idx = nums.size()-2;idx>=0;idx--)
        {
            if(idx+nums[idx]>=finalpos)
            {
                finalpos=idx;
            }
        }

        return finalpos==0;
    }
};