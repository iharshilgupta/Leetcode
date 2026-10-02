class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        
        /*initial approach of  sc: O(n|k|) or O(n*abs(k))

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
        return ans; */

        /* optimal approach  tc:O(abs(k)+n) and sc: O(n) */
        int n=code.size();
        vector<int> ans(n,0);
        if(k==0) return ans;
        int left =(k>0) ? 1 : n-abs(k);
        int right =(k>0) ? k: n-1;
        int sum=0;
        for(int i=left;i<=right;++i){
            sum+=code[i];
        }
        for(int i=0;i<n;++i){
            ans[i]=sum;
            sum-=code[left%n];
            left++;
            right++;
            sum+=code[right%n];
        }
        return ans;
    }
};