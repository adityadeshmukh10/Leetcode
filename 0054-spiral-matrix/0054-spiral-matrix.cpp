class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int startrow = 0;
        int startcol = 0;
        int endrow = matrix.size()-1;
        int endcol = matrix[0].size()-1;
        vector<int> v;
        while(startrow<=endrow && startcol<=endcol)
        {
            for(int i=startcol;i<=endcol;i++)
            {
                v.push_back(matrix[startrow][i]);
            }
            for(int i=startrow+1;i<=endrow;i++)
            {
                v.push_back(matrix[i][endcol]);
            }
            for(int i=endcol-1;i>=startcol;i--)
            {
                if(startrow==endrow)
                {
                    break;
                }
                v.push_back(matrix[endrow][i]);
            }
            for(int i=endrow-1;i>=startrow+1;i--)
            {
                if(startcol==endcol)
                {
                    break;
                }
                v.push_back(matrix[i][startcol]);
            }
            startrow++;
            startcol++;
            endrow--;
            endcol--;
        }
        return v;
    }
};