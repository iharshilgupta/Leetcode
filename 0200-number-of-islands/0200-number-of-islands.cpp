class Solution {
public:
    void dfs(vector<vector<char>>& grid,int r,int c,int rows,int cols){
        if(r<0 || r>=rows || c<0 || c>=cols || grid[r][c]=='0'){
            return;// stoping at water cells and out of bound
        }
        grid[r][c]='0'; // new concept of converting the grid[i][j] to 1
        dfs(grid,r-1,c,rows,cols); // checking and converting every member adjacent to this value to 0 and THIS IS FOR UP ADJACENT CELL
        dfs(grid,r,c-1,rows,cols);// LEFT ADJACENT
        dfs(grid,r,c+1,rows,cols);// RIGHT ADJACENT
        dfs(grid,r+1,c,rows,cols);// DOWN ADJACENT
    }
    int numIslands(vector<vector<char>>& grid) {
        if(grid.empty()) return 0;
        int count=0;
        int rows=grid.size();
        int cols=grid[0].size();
        for(int r=0;r<rows;++r){
            for(int c=0;c<cols;++c){
                if(grid[r][c]=='1'){// new island 
                    count++; //add it to the count
                    dfs(grid,r,c,rows,cols); // helper function to neglect the invalid islands
                }
            }
        }
        return count;
    }
};