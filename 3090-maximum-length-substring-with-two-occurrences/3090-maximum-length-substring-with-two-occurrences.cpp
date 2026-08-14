class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n=s.length();
        int ans=0;
        vector<int> count(26,0);
        for(int l=0,r=0;r<n;++r){
            count[s[r]-'a']++;
            while(count[s[r]-'a']>2){
                count[s[l]-'a']--;
                l++;
            }
            ans=max(ans, r-l+1);
        }
        return ans;
    }
};