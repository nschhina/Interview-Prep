class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        if(row==0) return false;
        int col = matrix[0].size();
        if(col==0) return false;
        int i = row-1,j =0;
        while(i>=0&&j<=col-1)
        {
            if(target>matrix[i][j])
            {
                j++;
            }
            else if(target<matrix[i][j])
            {
                i--;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};
