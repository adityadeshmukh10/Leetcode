class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int sum = 0;
        vector<int> v;
        for(int i=0;i<rolls.size();i++)
        {
            sum += rolls[i];
        }

        int k = rolls.size() + n;
        int ans = (mean*k) - sum;
        if (ans < n || ans > 6 * n) {
            return {}; // No valid solution
        }
        int h = ans/n;
        int b = ans%n;
        for(int j=0;j<n;j++)
        {
            v.push_back(h);
        }
        for(int i=0;i<b;i++)
        {
            v[i] += 1;
        }
        return v;
    }
};