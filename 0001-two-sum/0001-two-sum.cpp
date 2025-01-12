class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        unordered_map<int,int> mp;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            int k = nums[i];
            int more = target-k;
            if(mp.find(more)!=mp.end())
            {
                return {mp[more], i};
            }
            mp[k]=i;
        }
        return {-1,-1};
    }
};