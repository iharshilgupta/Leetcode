class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        /* main approach is to go inside the matrix and create another matrix
        try to get to every cell and give the cell a count that is the number of steps required to get 
        to the cell that will help us build a choice model later
        later we use a nested for loop to update the cell and matrix and return the last cell 
        as the new matrix chooses between min of down and right cell ending the least value in the ending cell */
        
        int rows=grid.size();
        int cols=grid[0].size();
        vector<vector<int>> dp(rows,vector<int>(cols,0));//(grid.size(),grid[0].size());
        dp[0][0]=grid[0][0];
        for(int i=1;i<cols;++i){
            dp[0][i]=dp[0][i-1]+grid[0][i];
        }
        for(int i=1;i<rows;++i){
            dp[i][0]=dp[i-1][0]+grid[i][0];
        }
        for(int i=1;i<rows;++i){
            for(int j=1;j<cols;++j){
                dp[i][j]=grid[i][j]+min(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[rows-1][cols-1];
    }
};