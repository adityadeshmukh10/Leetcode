class Solution {
public:
    int jump(vector<int>& nums) {
        int totaljumps = 0;
        int destination = nums.size()-1;
        int coverage = 0;
        int lastjumpindex = 0;

        if(nums.size()==1)
        {
            return 0;
        }

        for(int i=0;i<nums.size();i++)
        {
            coverage = max(coverage,i+nums[i]);

            if(i==lastjumpindex)
            {
                lastjumpindex = coverage;
                totaljumps++;

                if(coverage>=destination)
                {
                    return totaljumps;
                }
            }
        }
        return totaljumps;
    }
};