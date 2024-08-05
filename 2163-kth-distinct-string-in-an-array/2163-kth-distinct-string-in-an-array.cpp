class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        // Step 1: Count the frequency of each string
        map<string, int> frequencyMap;
        for (const auto& s : arr) {
            frequencyMap[s]++;
        }
        
        // Step 2: Collect distinct strings that appear exactly once
        vector<string> distinctStrings;
        for (const auto& s : arr) {
            if (frequencyMap[s] == 1) {
                distinctStrings.push_back(s);
            }
        }
        
        // Step 3: Return the k-th distinct string, if available
        if (k > 0 && k <= distinctStrings.size()) {
            return distinctStrings[k - 1];
        }
        
        return ""; // Return empty string if k is out of bounds
    }
};