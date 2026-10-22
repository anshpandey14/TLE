#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,q;
    cin>>n>>q;
    vector<long long> a(n);
    for(long long i=0;i<n;i++){
        cin>>a[i];
    }
    vector<long long> p(n,0);
    p[0] = a[0];
    for(long long i=1;i<n;i++){
        p[i] = a[i]+p[i-1];
        // cerr<<p[i]<<'\n';
    }
    while(q--){
        long long a,b;
        cin>>a>>b;
        if(a==1){
            cout<<p[b-1]-0<<'\n';
        }
        else cout<<p[b-1]-p[a-2]<<'\n';
    }
    return 0;
}