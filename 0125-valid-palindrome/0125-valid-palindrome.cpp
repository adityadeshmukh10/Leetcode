#include<bits/stdc++.h>
class Solution {
public:
    bool isPalindrome(string s) {
        string r="";
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            char c=tolower(s[i]);
            if((c >= 'a' && c <= 'z') || c>= '0' && c<= '9' )
            {
                r+=c;
            }
        }
        string p=r;
        reverse(r.begin(),r.end());
        cout<<p<<" "<<r<<" ";
        if(r==p)
            return true;
        else
            return false;
    }
};