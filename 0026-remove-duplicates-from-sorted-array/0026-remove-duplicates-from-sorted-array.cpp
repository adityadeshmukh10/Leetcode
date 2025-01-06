class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0; // Handle edge case for empty input

        // Use a set to store unique elements
        set<int> st;
        for (int i = 0; i < nums.size(); i++) {
            st.insert(nums[i]);
        }

        // Overwrite nums with unique elements and fill the rest with '_'
        int k = 0; // Counter for unique elements
        for (int val : st) {
            nums[k++] = val; // Place unique elements at the start of nums
        }

        while (k < nums.size()) {
            nums[k++] = '_'; // Replace remaining positions with '_'
        }

        return st.size(); // Return the count of unique elements
    }
};
