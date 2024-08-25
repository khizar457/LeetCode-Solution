class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty())
        {
            return false;
        }
        bool found = false;        
        int rows = matrix.size();
        int columns = matrix[0].size();

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                if (matrix[i][j] == target)
                {
                    found = true;
                    break;
                }
            }
        }
        return found;
    }
};