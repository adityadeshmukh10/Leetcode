class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> st;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int k=0;k<n;k++)
        {
            st.insert(nums[k]);
        }
        vector<int> num;
        for(int val:st)
        {
            num.push_back(val);
        }
        int i=0, j=1, maxcount=0, p=0;
        if(num.size()==1)
        {
            return 1;
        }
        while(j<num.size())
        {
            
            if(num[j]-num[j-1] == 1)
            {
                // count++;
                if(j==num.size()-1)
                {
                    // return j-i+1;
                    maxcount = max(maxcount, j - i+1);

                }
                j++;
            }
            else
            {
                // count=1;
                p=j-i;
                i=j;
                j++;
                maxcount = max(p,maxcount);
            }
        }
        return maxcount;
    }
};