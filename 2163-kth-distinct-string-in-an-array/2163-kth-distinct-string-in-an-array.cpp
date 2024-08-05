class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> map;
        for (auto const& a : arr) {
            map[a]++;
        }
        string kString = "";
        for (auto const& a : arr) {
            if (map[a] == 1) {
                k--;
                if (k == 0) {
                    kString = a;
                }
            }
        }
        return kString;
    }
};