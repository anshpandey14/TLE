#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b;
    cin>>a>>b;
    // if(a>b){
        int q = a%b;
        if(q!=0) cout<<b-q<<'\n';
        else cout<<0<<'\n';
    // }
    // else{

    // }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}