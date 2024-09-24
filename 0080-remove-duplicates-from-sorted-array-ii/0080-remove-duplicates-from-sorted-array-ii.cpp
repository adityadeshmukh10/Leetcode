class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> mp;
        int index = 0;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second==1)
            {
                nums[index]=it->first;
                index++;
            }
            else if(it->second>1)
            {
                nums[index]=it->first;
                index++;
                nums[index]=it->first;
                index++;
            }
        }
        return index;
    }
};