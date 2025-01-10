class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int summ = 0;
        for(int i=0;i<n;i++)
        {
            sum = sum + nums[i];
        }
        int p=0;
        for(p=0;p<=n;p++)
        {
            summ = summ + p;
        }
        int k = summ-sum;
        return k;
    }
};