class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        vector<int> ans(n,0); // starting array with n 0's
        if(k==0) return ans; // returning the array of 0's if k==0 base case
        for(int i=0;i<n;++i){
            int sum=0;
            int ite=abs(k);
            int pos=(k>0) ? (i+1)%n : (i-1+n)%n;
            while(ite--){
                sum+=code[pos];
                if(k>0){
                    pos=(pos+1)%n;
                }
                else{
                    pos=(pos-1+n)%n;
                }
            }
            ans[i]=sum;
        }
        return ans;
    }
};