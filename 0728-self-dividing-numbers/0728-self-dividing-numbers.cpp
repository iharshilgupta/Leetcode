class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> answer;
        while(left<=right){
            int num=left;
            while(num>0){
                int rem=num%10;
                if(rem==0 || left%rem!=0) break;
                num/=10;
            }
            if(num==0){
                answer.push_back(left);
            }
            left++;
        }
        return answer;
    }
};