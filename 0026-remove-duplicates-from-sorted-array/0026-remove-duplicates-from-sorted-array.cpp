class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }
        set<int> st;
        for (int i = 0; i < nums.size(); i++) {
            st.insert(nums[i]);
        }

        
        int k = 0; 
        for (int val : st) {
            nums[k] = val; 
            k++;
        }

        while (k < nums.size()) {
            nums[k] = '_';
            k++;
        }

        return st.size(); 
    }
};
