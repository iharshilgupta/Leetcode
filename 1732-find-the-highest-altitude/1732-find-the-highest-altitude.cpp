class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        int count=0;
        int high=0;
        for(int i=0;i<n;i++){
            count+=gain[i];
            high=max(high,count);
        }
        // for(int i=0;i<n;i++){
        //     if(alt[i]>high){
        //         high=alt[i];
        //     }
        // }
        return high;
    }
};