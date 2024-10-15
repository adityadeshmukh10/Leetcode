class Solution {
public:
    long long minimumSteps(string s) {
        vector<int> v;
        int n =s.length()-1;
        for(int i=n;i>=0;i--)
        {
            if(s[i]=='1')
            {
                v.push_back(i);
            }
        }
        int m = v.size()-1;
        int k=0;
        long long a=0;

        while(k<=m)
        {
            a+=n-v[k];
            n--;
            k++;
        }
        return a;
    }
};