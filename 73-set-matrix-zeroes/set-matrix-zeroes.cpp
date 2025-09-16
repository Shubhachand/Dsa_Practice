class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n  = matrix.size();
        int m = matrix[0].size();
        // int col[m] = {0};
        // int row[n] = {0};
        vector<int> col(m, 0); 
        vector<int> row(n, 0);
 // size m, initialized with 0



        for(int i = 0;i < n ; i++){
            for(int j = 0; j<m;j++){
                if(matrix[i][j]==0){
                    col[j] = 1;
                    row[i] = 1;
                     
                }
            }
        }


         for(int i = 0;i < n ; i++){
            for(int j = 0; j<m;j++){
                if(col[j] || row[i]){
                    matrix[i][j] = 0;
                }
            }
        }

    }
};