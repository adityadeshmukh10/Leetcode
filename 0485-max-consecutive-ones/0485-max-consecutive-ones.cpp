class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& a) {
        int n = a.size();
        int i=0,j=0,k = 0;
        while(i<a.size() && j<a.size())
        {
            if(a[j]==0)
            {
                k = max(k,j-i);
                j++;
                i=j;
            }
            else if(a[j]==1)
            {
                if(j==a.size()-1)
                {
                    k = max(k,j-i+1);
                    return k;
                }
                j++;
            }
        }
        return k;
    }
};