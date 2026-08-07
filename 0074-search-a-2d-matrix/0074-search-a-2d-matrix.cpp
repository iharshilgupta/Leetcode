class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        if(n==0){ // empty matrix
            return false;
        }
        int m=matrix[0].size();
        int low=0;
        int high=n*m-1;
        while(low<=high){
            int mid=(low)+(high-low)/2;
            int tar=matrix[mid/m][mid%m];  // dividing the number of columns mid/m and mid%n is number of steps
            if(tar==target){
                return true;
            }
            else if(tar<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return false;
    }
};