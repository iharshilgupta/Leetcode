class Solution {
public:
    int countCommas(int n) {
        int comma=1;
        int total=0;
        if(n<=999){
            return 0;
        }
        for(int i=1000;i<=n;++i){
            total+=comma;
        }
        return total;
    }
};