#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==1 && a[0]>1){
        cout<<"NO"<<'\n';
        return;
    }
    else if(n==1 && a[0]==1){
        cout<<"YES"<<'\n';
        return;
    }
    sort(a.begin(),a.end(),greater<int>());
    if(a[0]-a[1] > 1) cout<<"NO"<<'\n';
    else cout<<"YES"<<'\n';
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}