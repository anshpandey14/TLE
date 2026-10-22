#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for(int i=0;i<n-1;i++){
        if(abs(a[i]-b[i+1]) + abs(b[i]-a[i+1]) < abs(a[i]-a[i+1]) + abs(b[i]-b[i+1])){
            swap(a[i+1],b[i+1]); 
        }
    }
    long long ans = 0;
    for(int i=0;i<n-1;i++){
        ans += abs(a[i]-a[i+1]);
        ans += abs(b[i]-b[i+1]);
    }
    cout<<ans<<'\n';
}

int main(){
    int t;cin>>t;
    while(t--) solve();
}