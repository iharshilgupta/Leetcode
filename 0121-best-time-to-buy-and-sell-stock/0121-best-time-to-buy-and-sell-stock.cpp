class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int low=prices[0];
        int high=0;
        for(int i=0;i<n;i++){
            if(prices[i]<low){
                low=prices[i];
            }
            if(prices[i]-low>high){
                high=prices[i]-low;
            }
        }
        return high;
    }
};