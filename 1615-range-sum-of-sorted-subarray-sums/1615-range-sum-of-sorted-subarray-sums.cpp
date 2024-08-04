class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> vt;
        const int MOD = 1e9 + 7;

        // Iterate over each starting index of subarray
        for (int start = 0; start < n; ++start) {
            // Calculate the sum for subarrays starting from 'start'
            int currentSum = 0;
            for (int end = start; end < n; ++end) {
                currentSum += nums[end];
                vt.push_back(currentSum);
            }
        }
        
        sort(vt.begin(), vt.end());
        long long s = 0;

        for (int i = left - 1; i < right; ++i) {
            s = (s + vt[i]) % MOD;
        }

        return s;
    }
};