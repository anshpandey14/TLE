#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long t;
    while(cin>>t && t!=0){
        map<unsigned long long,unsigned long long> mp;
        for(unsigned long long i=2;i*i<=t;i++){
            while(t%i==0){
                mp[i]++;
                t/=i;
            }
        }
        if(t>1) mp[t]++;
        for(auto &it:mp){
            cout<<it.first<<"^"<<it.second<<" ";
        }
        cout<<'\n';
    }
}