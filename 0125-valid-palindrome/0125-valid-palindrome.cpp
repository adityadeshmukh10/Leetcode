class Solution {
public:
    bool isPalindrome(std::string s) {
        // Step 1: Remove non-alphabetic characters
        int n = s.length();
        for (int i = 0; i < n; i++) {
            if (!isalnum(s[i])) {
                s.erase(i, 1);  // Erase non-alphabetic character
                i--;  // Adjust the index after erase
                n--;  // Reduce the length of the string as it's changed
            }
        }

        // Step 2: Create a reversed copy of the cleaned string
        std::string s1 = s;
        for (int i = 0; i < n / 2; i++) {
            std::swap(s1[i], s1[n - i - 1]);
        }

        // Step 3: Convert both strings to lowercase and check if they are the same
        for (int i = 0; i < n; i++) {
            s[i] = std::tolower(s[i]);
            s1[i] = std::tolower(s1[i]);
        }

        // Step 4: Return true if the reversed string matches the original string
        if (s1 == s) {
            return true;
        }
        return false;
    }
};