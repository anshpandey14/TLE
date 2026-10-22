#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x;
        cin>>x;
        string s;
        cin>>s;
        map<char,int>p,q;
        for(int i=0;i<x.length();i++){
            p[x[i]]++;
        }
        for(int i=0;i<s.length();i++){
            p[s[i]]++;
        }
        if(n==m){
            for(int i=0;i<s.length();i++){
                p[s[i]]++;
            }
        }
    }
}