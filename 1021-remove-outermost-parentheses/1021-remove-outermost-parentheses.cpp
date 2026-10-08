class Solution {
public:
    string removeOuterParentheses(string s) {
        string a="";
        // if(s.length()<=2) return s;
        int fp=0;
        for(char c:s){
            if(c=='('){
                if(fp>0){
                    a+=c;
                }
                fp++;
            }
            else{
                fp--;
                if(fp>0){
                    a+=c;
                }
            }
        }
        return a;
    }
};