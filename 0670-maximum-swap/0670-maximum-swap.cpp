class Solution {
public:
    int maximumSwap(int num) {
        string s = to_string(num);
        int n = s.length();
        vector<int> maxright(n);

        maxright[n-1] = n-1;
        for(int i=n-2;i>=0;i--)
        {
            int rightmaxidx = maxright[i+1];
            int rightmaxelement = s[rightmaxidx];

            maxright[i] = (s[i] > rightmaxelement) ? i : rightmaxidx;
        }
 
        for(int i=0;i<n;i++)
        {
            int maxrightidx = maxright[i];
            int maxrightelement = s[maxrightidx];
            if(s[i] < maxrightelement)
            {
                swap(s[i],s[maxrightidx]);
                return stoi(s);
            }
        }
        return num;
    }
};