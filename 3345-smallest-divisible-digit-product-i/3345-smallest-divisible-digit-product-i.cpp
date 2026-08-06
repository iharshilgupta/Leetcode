class Solution {
private:
    int pro(int num){
        int product=1;
        while(num>0){
            product*=(num%10);
            num/=10;
        }
        return product;
    }
public:
    int smallestNumber(int n, int t) {
        int num=n;
        while(true){
            if(pro(num)%t==0){
                return num;
            }
            num++;
        }
    }
};