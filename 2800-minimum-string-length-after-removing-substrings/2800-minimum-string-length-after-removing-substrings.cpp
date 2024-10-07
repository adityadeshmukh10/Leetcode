class Solution {
public:
    int minLength(string s) {
        string s1 = "AB";
        string s2 = "CD";
        
        // Keep checking for s1 and s2 until they can no longer be found
        while (s.find(s1) != string::npos || s.find(s2) != string::npos) {
            // If "AB" is found, erase it
            size_t pos = s.find(s1);
            if (pos != string::npos) {
                s.erase(pos, s1.length());
            }
            // If "CD" is found, erase it
            pos = s.find(s2);
            if (pos != string::npos) {
                s.erase(pos, s2.length());
            }
        }
        
        // Return the length of the modified string
        return s.length();
    }
};
