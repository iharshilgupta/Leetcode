class Solution {
public:
    int minAddToMakeValid(string s) {
        // clasic dry run string problem 
        int count=0;
        int balance=0;
        for(char c:s){
            if(c=='('){
                balance++;
            }else{
                if(balance>0){
                    balance--;
                }
                else{
                    count++;
                }
            }
        }
        return balance+count;
    }
};