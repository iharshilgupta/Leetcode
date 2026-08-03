class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        std::vector<int> r(nums1.size() + nums2.size());
        std::merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), r.begin());
        int target=r.size();
        target=target/2;
        double m=r[0];
        if(r.size()%2!=0){
            m=r[target];
        }
        else{
            m=r[target]+r[target-1];
            m=m/2;
        }
        return m;
    }
};