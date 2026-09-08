class Solution {
public:
    int time(const string& times){
        int hours,minutes=0;
        sscanf(times.c_str(),"%d:%d", &hours,&minutes);
        return(hours*60)+minutes;
    }
    int convertTime(string current, string correct) {
        int target=time(correct);
        int match=time(current);
        int diff=(target-match);
        int steps=0;
        steps+=diff/60;
        diff%=60;
        steps+=diff/15;
        diff%=15;   
        steps+=diff/5;
        diff%=5;
        steps+=diff;
        return steps;
    }
};