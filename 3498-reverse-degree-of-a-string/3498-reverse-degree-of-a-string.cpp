class Solution {
public:
    int reverseDegree(string s) {
        int count=0;
        int n=s.size();
        for(int i=0;i<n;++i){
            int deg=26-(s[i]-'a');
            count+=deg*(i+1);
        }
        return count;
    }
};