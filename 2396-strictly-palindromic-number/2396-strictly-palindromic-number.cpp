class Solution {
public:
    string convert(int num,int base){
        string ans="";
        while(num>0){
            int rem=num%base;
            ans+=to_string(rem);
            num/=base;
        }
        return ans;
    }
    bool check(string s){
        int n=s.size();
        bool l=true;
        int low=0;
        int high=n-1;
        while(low<=high){
            if(s[low]!=s[high]){
                l=false;
                break;
            }
            low++;
            high--;
        }
        return l;
    }
    bool isStrictlyPalindromic(int n) {
        string s=to_string(n);
        for(int i=2;i<=sqrt(n)+1;++i){
            int base=i;
            string t=convert(n,i);
            if(!check(t)){
                return false;
            }
        }
        return true;
    }
};