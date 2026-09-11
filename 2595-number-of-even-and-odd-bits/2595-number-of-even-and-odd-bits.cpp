class Solution {
public:
    vector<int> evenOddBit(int n) {
        int odd=0;
        int even=0;
        int ans=0;
        // first approach worked on 256/1000 something test cases and now I will change it a bit
        // std::string con = std::bitset<8>(n).to_string();
        // for(int i=0;i<con.size();++i){
        //     if(con[i]=='1' && i%2==0){
        //         even++;
        //     }
        //     else if(con[i]=='1' && i%2!=0){
        //         odd++;
        //     }
        //     else{
        //         continue;
        //     }
        // }
        while(n>0){
            if((n&1)==1){
                if(ans%2==0){
                    even++;
                }
                else{
                    odd++;
                }
            }
            n>>=1;
            ans++;
        }
        return{even,odd};

    }
};