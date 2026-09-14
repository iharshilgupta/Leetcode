class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int d1=rec2[0]-rec1[2];
        int d2=rec1[0]-rec2[2];
        int d3=rec2[1]-rec1[3];
        int d4=rec1[1]-rec2[3];
        if(d1>=0 || d2>=0 || d3>=0 || d4>=0)return false;
        return true;
    }
};