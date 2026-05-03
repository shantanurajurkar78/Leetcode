class Solution {
public:
    // bool isSafe(int row,int col,vector<string>board,int n)
    // {
    //     int duprow =row;
    //     int dupcol = col;

    //     while(row>=0 && col>=0)
    //     {
    //         if(board[row][col] == 'Q') return false;
    //         row--;
    //         col--;
    //     }

    //     col = dupcol;
    //     row = duprow;

    //     while(col>=0)
    //     {
    //         if(board[row][col] == 'Q') return false;
    //         col--;
    //     }

    //     col = dupcol;
    //     row = duprow;
    //     while(row<n && col>=0)
    //     {
    //          if(board[row][col] == 'Q') return false;
    //          row++;
    //          col--;
    //     }

    //     return true;
    // }

    void solve(int col, vector<vector<string>>& ans, vector<string>& board,
               int n, vector<int>& leftrow, vector<int>& upperdiagonal,
               vector<int>& lowerdiagonal) {
        if (col == n) {
            ans.push_back(board);
            return;
        }

        for (int row = 0; row < n; row++) {
            if (leftrow[row] == 0 && lowerdiagonal[row + col] == 0 &&
                upperdiagonal[n - 1 + col - row] == 0) {
                    board[row][col] = 'Q';
                    leftrow[row] = 1;
                    lowerdiagonal[row + col] = 1;
                    upperdiagonal[n - 1 + col - row] = 1;
                    solve(col + 1, ans, board, n , leftrow,upperdiagonal,lowerdiagonal);
                    board[row][col] = '.';
                    leftrow[row] = 0;
                    lowerdiagonal[row + col] = 0;
                    upperdiagonal[n - 1 + col - row] = 0;
                }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n, '.');

        vector<int> leftrow(n, 0);
        vector<int> upperdiagonal(2 * n - 1, 0);
        vector<int> lowerdiagonal(2 * n - 1, 0);

        for (int i = 0; i < n; i++) {
            board[i] = s;
        }

        solve(0, ans, board, n, leftrow, upperdiagonal, lowerdiagonal);
        return ans;
    }
};