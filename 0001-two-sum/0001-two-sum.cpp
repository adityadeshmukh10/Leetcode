class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]] = i;  
        }
        for(int j=0;j<nums.size();j++){
            int p = target - nums[j];
            if(mp.find(p)!=mp.end() && mp[p]!=j){
                v.push_back(j);      
                v.push_back(mp[p]);   
                return v;
            }
        }
        return v;
    }
};