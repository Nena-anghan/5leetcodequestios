class Solution {
    public:
        bool isValidSudoku(vector<vector<char>>& board)
         {
        vector<unordered_set<char>> rows(9), cols(9), boxes(9);
        
        for (int i = 0; i < 9; ++i)
         {
            for (int j = 0; j < 9; ++j)
             {
                char n = board[i][j];
    
                if (n == '.') continue;
                
                int boxIndex = (i / 3) * 3 + (j / 3);
                
                if (rows[i].count(n) || cols[j].count(n) || boxes[boxIndex].count(n)) {
                    return false;
                }
                
                rows[i].insert(n);
                cols[j].insert(n);
                boxes[boxIndex].insert(n);
            }
        }
        return true;
    }
    
    };