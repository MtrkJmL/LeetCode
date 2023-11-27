class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        const int k = 9;
        int val = -1;
        int boxNum = -1;
        int row[k][k+1] = {0};
        int col[k][k+1] = {0};
        int box[k][k+1] = {0};
        for(int r=0; r<k; r++){
            for(int c=0; c<k; c++){
                val = board[r][c] - '0';
                boxNum = 3*(r/3)+(c/3);
                if(board[r][c]== '.')
                    continue;
                if(row[r][val]==1 || col[c][val]==1 || box[boxNum][val]==1)
                    return false;
                row[r][val]=1;
                col[c][val]=1;
                box[boxNum][val]=1;
            }
        }
        return true;
    }
};