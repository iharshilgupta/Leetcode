class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        string ans="";
        unordered_map<string,string> match;
        for(const auto& c:knowledge){
            match[c[0]]=c[1];
        }
        for(int i=0;i<s.size();++i){
            if(s[i]=='('){
                int j=s.find(')',i+1);
                string a=s.substr(i+1,j-i-1);
                ans+=match.count(a) ? match[a]:"?";
                i=j;
            }
            else{
                ans+=s[i];
            }
        }
        return ans;
    }
};