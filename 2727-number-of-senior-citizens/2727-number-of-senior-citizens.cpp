class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for (const string& str : details) {
            int age = stoi(str.substr(11, 2)); // Extract age from the string and convert to integer
            if (age > 60) {
                count++;
            }
        }
        return count;
    }
};
