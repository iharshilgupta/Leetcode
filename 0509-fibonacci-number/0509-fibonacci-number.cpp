class Solution {
public:
    int fib(int n) {
        // vector<int> dp(n+1,1);
        // if(n<=1) return n;
        // dp[0]=0;
        // dp[1]=1;
        // for(int i=2;i<=n;++i){
        //     dp[i]=dp[i-1]+dp[i-2];
        // }
        // return dp[n];
        if(n<=1) return n;
        int fir=0;
        int sec=1;
        int temp=0;
        for(int i=2;i<=n;++i){
            int temp=fir+sec;
            fir=sec;
            sec=temp;
        }
        return sec;
    }
};