class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        std::sort(g.begin(), g.end());
        std::sort(s.begin(), s.end());
        int i = 0; // pointer for cookies
        int j = 0; // pointer for children
        int sz = s.size();
        int gz = g.size();
        int child = 0;
        
        while (i < sz && j < gz) {
            if (s[i] >= g[j]) {
                child++;
                j++;
            }
            
            i++;
        }
        return child;
    }
};