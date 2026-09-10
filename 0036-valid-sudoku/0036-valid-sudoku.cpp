class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n=board.size();
        unordered_set<char> rows[9]; // using hashsets to eliminate duplicates 
        unordered_set<char> cols[9];
        unordered_set<char> boxes[9];
        for(int i=0;i<9;++i){
            for(int j=0;j<9;++j){
                char c=board[i][j];
                if(c=='.') continue;
                int index=(i/3)*3+(j/3); // special index to covert the 9x9 into 3z3 
                if(rows[i].count(c) || cols[j].count(c) || boxes[index].count(c)){ // checking if any set has the existing number and if it does then returning false;
                    return false;
                }
                rows[i].insert(c); // if not seen then insert in both row and column and in the box
                cols[j].insert(c);
                boxes[index].insert(c);
            }
        }
        return true;
    }
};