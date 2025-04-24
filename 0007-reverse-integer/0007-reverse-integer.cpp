class Solution {
public:
    int reverse(int x) {
        long newno = 0;
        while (x != 0) {
            int lastdig = x % 10;
            x /= 10;
            newno = newno * 10 + lastdig;

            if (newno > INT_MAX || newno < INT_MIN) {
                return 0;
            }
        }
        return newno;
    }
};
