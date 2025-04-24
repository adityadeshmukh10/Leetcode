class Solution {
public:
    bool isPalindrome(int x) {

        int p = x;
        if(x<0)
        {
            return false;
        }
        long newno = 0;
        while(x>0)
        {
            int rem  = x%10;
            x=x/10;
            newno = (newno * 10) + rem;
        }
        if(p == newno )
        {
            return true;
        }
        return false;
    }
};