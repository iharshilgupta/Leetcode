class Solution {
public:
    void reverseString(vector<char>& s) {
        int fir=0;
        int last=s.size()-1;
        while(fir<last){
            char t=s[fir];
            s[fir]=s[last];
            s[last]=t;
            fir++;
            last--;
        }
    }
};