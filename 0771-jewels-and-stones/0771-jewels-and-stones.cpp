class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        unordered_map<char,int> seen;
        for(char c:stones){
            seen[c]++; // searching all the frequencies of characters in stone
        }
        for(char c:jewels){
            count+=seen[c]; // comparing the frequencies to count if they match in jewels
        }
        return count;
    }
};