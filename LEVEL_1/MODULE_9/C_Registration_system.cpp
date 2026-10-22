#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string,int>mp;
    while(n--){
        string s;
        cin>>s;
        if(mp.find(s)==mp.end()) cout<<"OK"<<'\n';
        else{
            int t = mp[s];
            cout<<s<<mp[s]<<'\n';
        }
        mp[s]++;
    }
    return 0;
}