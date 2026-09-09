class Solution {
public:
    long long countCommas(long long n) {
        // long long count = 0;
        // if (n <= 999) {
        //     return 0;
        // } else if (n >= 1000 && n <= 999999) {
        //     return n - 1000 + 1;
        // } else if (n >= 1000000 && n <= 9999999) {
        //     count += (n - 1000000 + 1) + (n - 1000 + 1);
        // } else if (n >= 1000000000 && n <= 9999999999) {
        //     count += (n - 1000000000 + 1) + (n - 1000000 + 1) + (n - 1000 + 1);
        // } else if (n >= 1000000000000LL && n <= 9999999999999LL) {
        //     count += (n - 1000000000000LL + 1) + (n - 1000000000 + 1) +
        //              (n - 1000000 + 1) + (n - 1000 + 1);
        // } else {
        //     count += (n - 1000000000000000LL + 1) + (n - 1000000000000LL + 1) +
        //              (n - 1000000000 + 1) + (n - 1000000 + 1) + (n - 1000 + 1);
        // }
        // return count;
        if(n<=999) 
            return 0;
        long long ans=0;
        for(long long i=1000;i<=n;i*=1000){
            ans+=(n-i+1);
        }
        return ans;
    }
};