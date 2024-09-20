class Solution {
public:
    vector<string> uncommonFromSentences(string a, string b) 
    {
        vector<string> v;
        unordered_map<string,int> mp;

        string word = "";
        for(int i=0;i<a.length();i++)
        {
            if(a[i]== ' ')
            {
                mp[word]++;
                word = "";
            }
            else
            {
                word += a[i];
            }
        }

        mp[word]++;
        word = "";

        for(int i=0;i<b.length();i++)
        {
            if(b[i]== ' ')
            {
                mp[word]++;
                word = "";
            }
            else
            {
                word += b[i];
            }
        }
        mp[word]++;

        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second==1)
            {
                v.push_back(it->first);
            }
        }
        return v;
    }
};