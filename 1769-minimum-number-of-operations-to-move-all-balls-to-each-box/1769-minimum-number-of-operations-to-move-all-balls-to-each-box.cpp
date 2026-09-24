class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();
        vector<int> ans(n,0);
        for(int i=0,count=0,steps=0;i<n;++i){
            ans[i]+=steps;
            count+=(boxes[i]-'0');
            steps+=count;
        }
        for(int i=n-1,count=0,steps=0;i>=0;--i){
            ans[i]+=steps;
            count+=(boxes[i]-'0');
            steps+=count;
        }
        return ans;
    }
};