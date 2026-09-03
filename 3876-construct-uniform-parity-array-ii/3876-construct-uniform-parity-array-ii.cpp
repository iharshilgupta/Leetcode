class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        // the solution tells us to check a value and find a minimum odd value
        // the minimum odd value is global and needed because of the math logic
        // that if an even number in the given array is less than minimum odd
        // value, the array cannot be transformed and parity is false

        if (nums1.size() == 1)
            return true;
        int min_odd = INT_MAX;
        for (int i = 0; i < nums1.size(); ++i) {
            if (nums1[i] % 2 != 0) {
                if (nums1[i] < min_odd) {
                    min_odd = nums1[i];
                }
            }
        }
        if (min_odd != INT_MAX) {
            for (int i = 0; i < nums1.size(); ++i) {
                if (nums1[i] % 2 == 0 && nums1[i] < min_odd) {
                    return false;
                }
            }
        }
        // if((nums1[i]-nums1[i+1])%2==0){
        //     eve=true;
        // }
        // else{
        //     odd=true;
        // }

        // if(eve && candidate){
        //     return true;
        // }
        // else if(odd && !candidate){
        //     return true;
        // }
        // else{
        //     return false;
        // }
        return true;
    }
};