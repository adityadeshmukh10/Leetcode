class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int right = n-1;
        int left = 0;
        
        while(left<=right)
        {
            int mid = (right+left)/2;
            if(target==nums[mid])
            {
                return mid;
            }
            else if(target<nums[mid])
            {
                right = mid-1;
            }
            else
            {
                left = mid+1;
            }
        }
        return -1;
    }
};