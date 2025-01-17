class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> vt;
        int n = matrix.size();
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    vt.push_back({i,j});
                }
            }
        }
        // for(auto pos:vt)
        // {
        //     int row = pos.first;
        //     int col = pos.second;

        //     for (int j = 0; j < matrix.size(); j++) {
        //         matrix[row][j] = 0;
        //     }
        //     for (int i = 0; i < matrix[i].size(); i++) {
        //         matrix[i][col] = 0;
        //     }
        // }
        for (auto pos : vt) {
    int row = pos.first;
    int col = pos.second;

    // Set the entire row to 0
    for (int j = 0; j < matrix[row].size(); j++) {
        matrix[row][j] = 0;
    }

    // Set the entire column to 0
    for (int i = 0; i < matrix.size(); i++) {
        matrix[i][col] = 0;
    }
}


    }
};