class Solution {
public:

   bool isSafe(int row, int col , vector<string>& board, int n) {
    int r = row, c = col;

    // upper-left diagonal
    while (r >= 0 && c >= 0) {
        if (board[r][c] == 'Q') return false;
        r--; c--;
    }

    // left
    r = row; c = col;
    while (c >= 0) {
        if (board[r][c] == 'Q') return false;
        c--;
    }

    // lower-left diagonal
    r = row; c = col;
    while (r < n && c >= 0) {
        if (board[r][c] == 'Q') return false;
        r++; c--;
    }

    return true;
}

     void nqueen(int col,vector<vector<string>>& ans,vector<string>& board,int n){
        // base case
        if(col == n){
            ans.push_back(board);
            return;
        }

        for(int row = 0 ; row<n;row++){
           if( isSafe(row,col,board,n)){
            board[row][col] = 'Q';
            nqueen(col+1,ans,board,n);
            board[row][col] = '.';
           }
        }
     }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
     vector<string> board(n, string(n, '.'));


        int col = 0;
        nqueen(col,ans,board,n);
        return ans;
    }
};