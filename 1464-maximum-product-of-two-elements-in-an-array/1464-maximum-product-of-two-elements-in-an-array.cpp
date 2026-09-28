class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int fir=0;
        int sec=0;
        for(int i:nums){
            if(i>fir){
                sec=fir;
                fir=i;
            }
            else if(i>sec){
                sec=i;
            }
        }
        return (fir-1)*(sec-1);
    }
};