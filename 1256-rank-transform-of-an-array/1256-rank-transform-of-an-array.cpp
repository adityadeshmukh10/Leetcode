class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        if (n == 0) return {}; // Edge case for empty array

        // Step 1: Create a sorted copy of arr to determine ranks
        vector<int> sortedArr = arr;
        sort(sortedArr.begin(), sortedArr.end());

        // Step 2: Assign ranks, avoiding duplicates
        unordered_map<int, int> rankMap;
        int rank = 1;
        for (int i = 0; i < n; i++) {
            // Only assign rank if the element is not already ranked (avoiding duplicates)
            if (rankMap.find(sortedArr[i]) == rankMap.end()) {
                rankMap[sortedArr[i]] = rank;
                rank++;
            }
        }

        // Step 3: Replace elements in the original array with their ranks
        vector<int> res(n);
        for (int i = 0; i < n; i++) {
            res[i] = rankMap[arr[i]];
        }

        return res;
    }
};