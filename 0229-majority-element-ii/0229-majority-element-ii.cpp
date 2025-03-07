class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> mp;
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second>nums.size()/3)
            {
                v.push_back(it->first);
            }
        }
        return v;
    }
};