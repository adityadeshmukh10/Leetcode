class Solution {
public:
    int maxWidthRamp(std::vector<int>& nums) {
        vector<int> max_right(nums.size());
        int i = nums.size() - 1;
        int prev_max = 0;

        // Fill max_right with the max values from the right side
        for (auto it = nums.rbegin(); it != nums.rend(); ++it) {
            max_right[i] = std::max(*it, prev_max);
            prev_max = max_right[i];
            i--;
        }

        int res = 0;
        int l = 0;
        
        // Find the maximum width ramp
        for (int r = 0; r < nums.size(); r++) {
            while (nums[l] > max_right[r]) {
                l++;
            }
            res = max(res, r - l);
        }

        return res;
    }
};