class Solution {
public:
    int mySqrt(int x) {
        if(x<=1) return x; // edge cases
        int low=1; // binary search approach of the lowest to the highest
        int high=x;
        int ans=0; // ans variable to update the value till we hit the next square number
        while(low<=high){
            int mid=low+(high-low)/2;
            if(mid<=x/mid){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
};