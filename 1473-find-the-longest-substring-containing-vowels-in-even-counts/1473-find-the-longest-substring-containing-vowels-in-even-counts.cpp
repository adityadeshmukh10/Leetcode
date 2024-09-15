class Solution {
public:
    int findTheLongestSubstring(string s) {
        unordered_map<int, int> m;
        m.insert({0, -1});
        int ans = 0, cur = 0;
        for (int i = 0; i < s.length(); i++) {
            auto n = string("aeiou").find(s[i]);
            if (n != string::npos) cur ^= 1 << n;
            if (!m.count(cur)) m[cur] = i;
            ans = max(ans, i - m[cur]);
        }
        return ans;
    }
};