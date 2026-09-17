class Solution {
public:
    int smallestNumber(int n) {
        // int x=n;
        // while(true){
        //     std::bitset<16> bin(x);
        //     string s=bin.to_string();
        //     size_t one=s.find('1');
        //     std::string valid=(one==string::npos) ?"0":s.substr(one);
        //     bool l=true;
        //     for(char c:valid){
        //         if(c!='1'){
        //             l=false;
        //             break;
        //         }
        //     }
        //     if(l) return x;
        //     x++;
        // }
        

        int bin=32-__builtin_clz(n);
        return(1<<bin)-1;
    }
};