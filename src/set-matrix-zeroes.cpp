class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        if(0<matrix.size())
        {
            int numRows = matrix.size();
            int numCols = matrix[0].size();
            vector<vector<int>> indexes;
            for(int r=0;r<numRows;r++)
            {
                for(int c=0;c<numCols;c++)
                {
                    if(matrix[r][c]==0)
                    {
                        indexes.push_back({r,c});
                    }
                }
            }
            for(auto index:indexes)
            {
                matrix[index[0]] = vector<int>(numCols, 0);
                int c = index[1];
                for(int r=0;r<numRows;r++)
                {
                    matrix[r][c] = 0;
                }
            }
        }
    }
};
