class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        // the initial approach was a math formula to count all the possible 3 digit even numbers
        
        /* but the solution existed in checking the freq of numbers occuring in the array and checkking from the range 100 to 998 for all possible even numbers and counting them through iterations adding the count*/
        int count=0;
        unordered_map<int, int> freq;
        for(int i:digits){
            freq[i]++;
        }
        for(int i=100;i<=998;i+=2){
            int u=i%10; // units tens and hundreds
            int t=(i/10)%10;
            int h=i/100;
            int ans[10]={0}; // ans array for storing possible values of the array in the current digit needed and initialsing everthing comes with value of needed digits only,
            // this helps us neglect leading zeroes and duplicate numbers in the array or final answer
            ans[u]++;
            ans[t]++;
            ans[h]++;
            if(freq[u]>=ans[u] && freq[t]>=ans[t] && freq[h]>=ans[h]){
                count++;
            }
        }
        return count;
    }
};