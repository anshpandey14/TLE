#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin>>n;
    // if(n==1) cout<<1<<'\n';
    // else{
        long long ans = 0;
        for(long long i = 1;i<=n;i++){
            if(n%i==0) ans++;
            else break;
        }
        cout<<ans<<'\n';
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