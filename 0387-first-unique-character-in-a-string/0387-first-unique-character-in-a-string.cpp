class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> seen;// hashmap to check the last occurence
        int index=-1; 
        for(int i=0;i<s.length();++i){
            seen[s[i]]++; // frequqncey updation 
        }
        for(int i=0;i<s.length();++i){
            if(seen[s[i]]==1){ // lowest frequency and which is unique traversing through a loop
                return i; // return index
            }
        }
        return -1; // return this if no unique elements are found and the previous return in the for loop tackles the exiting of the function early
    }
};