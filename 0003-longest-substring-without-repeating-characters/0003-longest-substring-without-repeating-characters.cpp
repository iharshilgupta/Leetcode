class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int ls=0;
        // unordered_set<char> seen;
        // int len=0;
        // for(int i=0;i<n;++i){
        //     while(seen.count(s[i])){
        //         seen.erase(s[ls]);
        //         ls++;
        //     }
        //     seen.insert(s[i]);
        //     len=max(len,i-ls+1);
        // }
        vector<bool> seen(128,false); 
        int len=0;
        for(int i=0;i<n;++i){
            while(seen[s[i]]){ 
                seen[s[ls]]=false;
                ls++;
            }
            seen[s[i]]=true;
            len=max(len,i-ls+1);
        }
        return len;
    }
};