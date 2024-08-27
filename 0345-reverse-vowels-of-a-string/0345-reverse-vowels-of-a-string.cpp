class Solution {
public:
    string reverseVowels(string s) {
        int a = s.length();
        string str="";
        for(int i=0;i<a;i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            {
                str+=s[i];
            }
        }
        reverse(str.begin(),str.end());
        int i=0;
        int j=0;

        while(i<a)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            {
                s[i] = str[j];
                j++;
                i++;
            }
            else
            {
                i++;
            }
        }
        return s;
    }
};