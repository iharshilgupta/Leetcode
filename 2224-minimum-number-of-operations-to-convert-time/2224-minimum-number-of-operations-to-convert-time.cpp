class Solution {
public:
    /* TC: O(1) and spacecomplexity is O(1)*/
    // int time(const string& times){
    //     int hours,minutes=0;
    //     sscanf(times.c_str(),"%d:%d", &hours,&minutes);
    //     return(hours*60)+minutes;
    // }
    int convertTime(string current, string correct) {
    //     int target=time(correct);
    //     int match=time(current);
    //     int diff=(target-match);
    //     int steps=0;
    //     steps+=diff/60;
    //     diff%=60;
    //     steps+=diff/15;
    //     diff%=15;   
    //     steps+=diff/5;
    //     diff%=5;
    //     steps+=diff;
    //     return steps;

    /*cleaner version*/
    int ch,cm,th,tm;
    sscanf(current.c_str(), "%d:%d", &ch,&cm);
    sscanf(correct.c_str(), "%d:%d", &th,&tm);
    int diff=((th*60)+tm) -((ch*60)+cm);
    int steps=0;
    const int options[] = {60,15,5,1};
    for(int i:options){
        steps+=diff/i;
        diff%=i;
    }
    return steps;
    }
};