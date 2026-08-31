class Solution {
public:
    int findTheWinner(int n, int k) {
        int count=0;// starting count
        for(int i=2;i<=n;++i){
            count=(count+k)%i; // number of moves for every n that will be taken to remove the element in the count/array till n
        }
        return count+1;// adding 1 to our array logic for not missing the index
    }
};