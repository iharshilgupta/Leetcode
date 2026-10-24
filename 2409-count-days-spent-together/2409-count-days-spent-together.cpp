class Solution {
private:
    const std::vector<int> dim = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int dateToDayOfYear(const std::string& date) {
        int month = std::stoi(date.substr(0, 2));
        int fir=std::stoi(date.substr(3, 2));
        int total=0;
        for (int m=0;m<month-1;++m) {
            total += dim[m];
        }
        return total+fir ;
    }
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int al=dateToDayOfYear(arriveAlice);
        int ale=dateToDayOfYear(leaveAlice);
        int bb=dateToDayOfYear(arriveBob);
        int bbe=dateToDayOfYear(leaveBob);
        int common=std::max(al,bb);
        int end= std::min(ale,bbe);
        return std::max(0,end-common+ 1);
    }
};