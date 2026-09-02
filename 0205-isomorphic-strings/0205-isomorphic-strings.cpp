class Solution {
public:
    bool isIsomorphic(string s, string t) {
        // TC is aboout 0(n) and Space complexity is about O(2n) onto O(n)
        if(s.length()!=t.length()) return false; // edge cases
        unordered_map<char,char> seen1; // seen set to store s char and occurences
        // if the count of ordered keys stay the same they cant be mapped
        unordered_map<char,char> seen2;
        for(int i=0;i<s.length();++i){
            char c=s[i]; // initiliasing two char variables to compare using find of hashMAP
            char d=t[i];

            //checking mapping from both hashmaps and allocating if the mappping does exist, 
            // after not finding the particular mapping we add it to the map and check if the value matches our VAlue of the other MAP it is mapped to 
            if(seen1.find(c)!=seen1.end()){ // if it does not exist in the map, then check 
                if(seen1[c]!= d) return false;
            }
            else{
                seen1[c]=d;
            }
            if(seen2.find(d)!=seen2.end()){
                if(seen2[d]!=c) return false;
            }
            else{
                seen2[d]=c;
            }
        } 
        return true;
    }
}; 