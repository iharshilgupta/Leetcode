class Solution {
public:
    bool checkPowersOfThree(int n) {
        // this question is not to find valid pairs of power 3 and returning the powers 
        // its a quuestion of reutrning true or false 
        // checking if an int is divisible or not verifies it being divided by 3 and only eliminating the false cases not focusig on marking the true ones
        while(n>0){
            int rem=n%3;
            if(rem==2){
                return false;
            }
            n/=3;
        }
        return true;
    }
};