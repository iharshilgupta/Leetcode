class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i=digits.size()-1;i>=0;--i){
           if(digits[i]<9){
            digits[i]++;
            return digits;// returnning the array when the first non nine is found 
           }
           else{
            digits[i]=0;// coverting the 9 into a 0 when a 9 at the end is found
           }
        }
        if(digits[0]==0){ // checking if the first index of digits is 0 meaning we have a carry to adjust and add to the array
            digits.insert(digits.begin(),1); // new concept of insert, and adjusting the carry
        }
        return digits;
    }
};