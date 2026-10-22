#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long w,h;
        cin>>w>>h;
        long long k1;
        cin>>k1;
        vector<long long> a1(k1);
        for(long long i=0;i<k1;i++){
            cin>>a1[i];
        }
        long long k2;
        cin>>k2;
        vector<long long> a2(k2);
        for(long long i=0;i<k2;i++){
            cin>>a2[i];
        }
        long long k3;
        cin>>k3;
        vector<long long> a3(k3);
        for(long long i=0;i<k3;i++){
            cin>>a3[i];
        }
        long long k4;
        cin>>k4;
        vector<long long> a4(k4);
        for(long long i=0;i<k4;i++){
            cin>>a4[i];
        }
        // cerr<<k1<<"a"<<k2<<"b"<<k3<<"c"<<k4<<"\n";
        long long ans = 0;
        long long p1 = (a1[k1-1]-a1[0])*h;
        long long p2 = (a2[k2-1]-a2[0])*h;
        ans = max(p1,p2);
        long long p3 = (a3[k3-1]-a3[0])*w;
        long long p4 = (a4[k4-1]-a4[0])*w;
        // cerr<<p1<<" "<<p2<<" "<<p3<<" "<<p4<<'\n';
        ans = max(ans,max(p3,p4));
        cout<<ans<<'\n';
    }
    return 0;
}