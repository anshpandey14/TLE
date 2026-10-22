#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        unordered_map <char,int> mp;
        for(char &i:s){
            mp[i]++;
        }
        int a=0,b=0;
        for(auto &it:mp){
            if(it.second>1) a++;
            else b++;
        }
        cout<<a+b/2<<'\n';
    }
}