class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        int count=0;
        vector<int> row(m,0);
        vector<int> col(n,0);
        for(const auto& i:indices){
            row[i[0]]++;
            col[i[1]]++;
        }
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                if((row[i]+col[j])%2!=0){
                    count++;
                }
            }
        }
        return count;
    }
};