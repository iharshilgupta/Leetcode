// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        // initial approach is to check out the first half and leave it when false value doestn exist, the only bad value meets after first true condition of isBadVersion
        int low=1;
        int high=n; // 1 and n insted of 0 and n-1 because itn not an array
        while(low<high){
            int mid=low+(high-low)/2;
            if(isBadVersion(mid)){
                high=mid; // changing high to mid and leaving the other half because its not bad
            }
            else{
                low=mid+1; // leaving the first half because its not bad
            }
        }
        return low; // until low=low where false value meets from isBadVersion then return low
    }
};