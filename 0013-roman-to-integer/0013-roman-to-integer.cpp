class Solution {
public:
    int roman(char c){
        switch(c){
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }
    int romanToInt(string s) {
        int count=0;
        for(int i=0;i<s.length();++i){
            int fin=roman(s[i]);
            if(i+1<s.length()){ // next character check
                int next=roman(s[i+1]);
                if(fin<next){
                    count+=(next-fin);
                    i++; // leaeve the current character
                    continue;
                }
            }
            count+=fin;
        }
        return count;
        // int count=0; // intialising count
        // int maxi=0; // intialising count 
        // for(int i=0;i<s.length()-1;i++){
        //     int fin=0;
        //     if(s[i]=='I') fin=1;
        //     else if(s[i]=='V') fin=5;
        //     else if(s[i]=='X') current_value = 10;
        //     else if(s[i]=='L') fin=50;
        //     else if(s[i]=='C') fin=100;
        //     else if(s[i]=='D') fin=500;
        //     else if(s[i]=='M') fin=1000;
        //     if(fin<maxi){
        //         count-=fin;
        //     }
        //     else{
        //         count+=fin;
        //         maxi=fin;
        //     }
        // }
        // return count;
    }
};