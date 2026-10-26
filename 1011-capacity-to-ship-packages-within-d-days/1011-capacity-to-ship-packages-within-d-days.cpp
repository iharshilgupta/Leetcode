class Solution {
private:
    bool ship(vector<int>& weights,int capacity,int days){
        int dc=1;
        int weight=0;
        for(int i:weights){
            if(weight+i>capacity){
                dc++;
                weight=0;
            }
            weight+=i;
        }
        return dc<=days;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
        int ans=high;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(ship(weights,mid,days)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};