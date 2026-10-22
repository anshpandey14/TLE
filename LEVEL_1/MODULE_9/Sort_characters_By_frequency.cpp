class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(char &i:s){
            mp[i]++;
        }
        vector<pair<char,int>> v(mp.begin(),mp.end());
        sort(v.begin(),v.end(),[](const auto &a, const auto &b){
            if(a.second == b.second) return a.first < b.first;
            return a.second > b.second;
        });
        s= "";
        for(auto &i:v){
            for(int j=0;j<i.second;j++){
                s+= i.first;
            }
        }
        return s;
    }
};