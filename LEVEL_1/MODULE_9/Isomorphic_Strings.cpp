class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mp1,mp2;
        int size = s.length();
        for(int i=0;i<size;i++){
            if(mp1.find(s[i])==mp1.end() && mp2.find(t[i]) == mp2.end()) {
                mp1[s[i]] = t[i];
                mp2[t[i]] = s[i];
            }
            else {
                if(mp1.contains(s[i]) && mp1.at(s[i]) == t[i] && mp2.contains(t[i]) && mp2.at(t[i]) == s[i]) continue;
                else return false;
            }
        }
        return true;
    }
};