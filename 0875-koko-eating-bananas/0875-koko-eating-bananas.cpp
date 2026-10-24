class Solution {
public:
//     bool canFinish(const std::vector<int>& piles, int h, int k){
//         long long total=0;
//         for(int i:piles){
//             total+=(i+k-1)/k;
//             if(total>h){
//                 return false;
//             }
//         }
//         return total<=h;
//     }
//     int minEatingSpeed(vector<int>& piles, int h) {
//         int n=piles.size();
//         sort(piles.begin(),piles.end());
//         int low=1;
//         int high=piles[n-1];
//         int mini=high;
//         while(low<=high){
//             int mid=low+(high-low)/2;
//             if(canFinish(piles,h,mid)){
//                 mini=mid;
//                 high=mid-1;
//             }
//             else{
//                 low=mid+1;
//             }
//         }
//         return mini;
//     }
// };
    bool canFinish(const std::vector<int>& piles, int h, int k){
        long long total=0;
        for(int i:piles){
            total+=(i+k-1)/k;
            if(total>h){
                return false;
            }
        }
        return total<=h;
    }
    int minEatingSpeed(std::vector<int>& piles, int h) {
        int low=1;
        int high=*std::max_element(piles.begin(), piles.end());
        int mini=high;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(canFinish(piles,h,mid)){
                mini=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return mini;
    }
};
