class Solution {
public:
    int minBitFlips(int start, int goal) {
        int xorVal = start ^ goal;  // Use a more descriptive name
        int count = 0;

        while (xorVal != 0) {
            if ((xorVal & 1) == 1) {  // Fix the condition
                count++;
            }
            xorVal = xorVal >> 1;
        }
        return count;
    }
};
