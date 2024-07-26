class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        vector<pair<int,int>> agescore;
        vector<int> dp(scores.size(), 0);
        int ret = 0;

        for(int i=0;i<scores.size();i++)
        {
            agescore.push_back(make_pair(ages[i],scores[i]));
        }
        sort(agescore.begin(),agescore.end());
        for(int i=0;i<scores.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                if(agescore[j].second <=agescore[i].second && dp[j]>dp[i])
                {
                    dp[i] = dp[j];
                }
            }
            dp[i]+=agescore[i].second;
            ret = max(ret,dp[i]);
        }
        return ret;
    }
};