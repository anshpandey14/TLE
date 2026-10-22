#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin>>q;
    while(q--){
        string s,t,p;
        cin>>s>>t>>p;
        map<char,int> mp1;
        for(int i=0;i<t.size();i++){
            mp1[t[i]]++;
        }
        for(auto &i:s){
            if(mp1.find(i) != mp1.end()) {
                mp1[i]--;
                if(mp1[i] ==0)mp1.erase(i);
            }
        }
        for(auto &i:p){
            if(mp1.find(i) != mp1.end()) {
                mp1[i]--;
                if(mp1[i] ==0)mp1.erase(i);
            }
        }
        if(mp1.size()>0) cout<<"NO"<<'\n';
        else cout<<"YES"<<"\n";
    }
    return 0;
}