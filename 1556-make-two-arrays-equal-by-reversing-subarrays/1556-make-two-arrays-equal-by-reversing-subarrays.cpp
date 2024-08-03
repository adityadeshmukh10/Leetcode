class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        map<int,int> mp1;
        map<int,int> mp2;

        for(int i=0;i<target.size();i++)
        {
            mp1[target[i]]++;
        }
        for(int i=0;i<arr.size();i++)
        {
            mp2[arr[i]]++;
        }

        if(mp1==mp2)
        {
            return true;
        }
        return false;
    }
};