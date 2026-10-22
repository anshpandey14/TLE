#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,p;
        cin>>n>>p;
        vector<pair<long long,long long>> a(n);
        for(int i=0;i<n;i++){
            long long temp;
            cin>>temp;
            a[i].second = temp;
        }
        for(int i=0;i<n;i++){
            long long temp;
            cin>>temp;
            a[i].first = temp;
        }
        sort(a.begin(),a.end());
        long long ans = p;
        long long c = 1;
        for(int i=0;i<n;i++){
            if(a[i].first >= p) break;
            int rem = n-c;
            ans += a[i].first*min(a[i].second,(long long)rem);
            c+= min(a[i].second,(long long)rem);
            if(c>=n) break;
        }
        ans += (n-c)*p;
        cout<<ans<<'\n';
    }
    return 0;
}