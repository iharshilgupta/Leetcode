class Solution {
public:
    int climbStairs(int n) {
        if(n<=3){
            return n;
        }
        int fir=2;
        int sec=3;
        for(int i=4;i<=n;++i){
            int steps=fir+sec;
            fir=sec;
            sec=steps;
        }
        return sec;
    }
};