class Solution {
public:
    int heightChecker(vector<int>& heights) {
        std::vector<int> expected=heights;
        std::sort(heights.begin(),heights.end());
        int c{0};
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=expected[i]){
                c++;
            }
        }
        return c;
    }
};