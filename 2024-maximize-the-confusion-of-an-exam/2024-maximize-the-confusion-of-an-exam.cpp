class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int tc=0,fc=0,left=0,len=0;
        for(int i=0;i<answerKey.length();++i){
            if(answerKey[i]=='T')  tc++;
            else fc++;
            while((i-left+1)-max(tc,fc)>k){
                if(answerKey[left]=='T') tc--;
                else fc--;
                left++;
            }
            len=max(len,i-left+1);
        }
        return len;
    }
};