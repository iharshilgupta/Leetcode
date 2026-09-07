class Solution {
public:
    int percentageLetter(string s, char letter) {
        int total=s.length();
        int per=0;
        for(char c:s){
            if(c==letter){
                per++;
            }
        }
        return (per*100)/total;
    }
};