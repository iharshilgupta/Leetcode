class Solution {
public:
    bool canTransform(vector<int>& source, vector<int>& target) {
        long long firSum=std::accumulate(source.begin(),source.end(),0LL); // first Sum 
        long long secSum=std::accumulate(target.begin(),target.end(),0LL);; // second Sum to compare the values and get to know if transformation is possible or not
        return firSum==secSum;
    }
};