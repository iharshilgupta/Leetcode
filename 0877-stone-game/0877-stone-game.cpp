class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int n=piles.size();
        vector<int> ans=piles; // new array to store answers
        // 
        for(int i=2;i<=n;i++){
            for(int j=0;j<=n-i;j++){
                int k=j+i-1;
                ans[j]=max(piles[j]-ans[j+1],piles[k]-ans[j]);
            }
        }
        return ans[0]>0; // score in answer array is positive then alice wins

        // also working solution:
        // return true;
        // its because alice always wins because of choosing first and picking the greater element
    }
};