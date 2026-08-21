class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<int> rows(n, 0);
        vector<int> columns(m, 0);

        // Find all original zeroes
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(matrix[i][j] == 0) {
                    rows[i] = -1;
                    columns[j] = -1;
                }
            }
        }

        // Set marked rows to zero
        for(int i = 0; i < n; i++) {
            if(rows[i] == -1) {
                markrow(matrix, i);
            }
        }

        // Set marked columns to zero
        for(int j = 0; j < m; j++) {
            if(columns[j] == -1) {
                markcolumn(matrix, j);
            }
        }
    }

    void markrow(vector<vector<int>>& matrix, int row) {
        int m = matrix[0].size();

        for(int j = 0; j < m; j++) {
            matrix[row][j] = 0;
        }
    }

    void markcolumn(vector<vector<int>>& matrix, int column) {
        int n = matrix.size();

        for(int i = 0; i < n; i++) {
            matrix[i][column] = 0;
        }
    }
};