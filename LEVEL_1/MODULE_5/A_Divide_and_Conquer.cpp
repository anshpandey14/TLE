#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    int oddc = 0;
    int minio = INT_MAX,minie=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2){
            oddc++;
            minio = min(minio,a[i]);
        }
        else minie = min(minie,a[i]);
    }
    if(oddc%2){
        int ans = 0;
        int sol = 0;
        while(minio>1){
            sol++;
            minio/=2;
        }
        ans = min(ans,sol);
        sol = 0;
        while(minie>0){
            sol++;
            minie/=2;
        }
        ans = min(ans,sol);
        if(n==1) cout<<ans+1<<'\n';
        else if(ans == 0) cout<<1<<'\n';
        else cout<<ans<<'\n';
    }
    else cout<<0<<'\n';
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}