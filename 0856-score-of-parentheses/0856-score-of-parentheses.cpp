class Solution {
public:
    int scoreOfParentheses(string s) {
        int score=0;
        int start=0;
        for(int i=0;i<s.length();++i){
            if(s[i]=='('){
                start++;
            }
            else{
                start--;
                if(s[i-1]=='('){
                     score+=(1<<start);
                }
            }
        }
        return score;
    }
};