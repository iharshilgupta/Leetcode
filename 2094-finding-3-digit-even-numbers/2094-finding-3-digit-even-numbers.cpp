class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> first;
        unordered_map<int, int> freq;
        for (int i : digits) {
            freq[i]++;
        }
        for (int i = 100; i <= 998; i += 2) {
            int u = i % 10;
            int t = (i / 10) % 10;
            int h = i / 100;
            vector<int> ans(10,0);
            ans[u]++;
            ans[t]++;
            ans[h]++;
            if(freq[u]>=ans[u] && freq[t]>=ans[t] && freq[h]>=ans[h]){
                first.push_back(i);
            }
        }
        return first;
    }
};