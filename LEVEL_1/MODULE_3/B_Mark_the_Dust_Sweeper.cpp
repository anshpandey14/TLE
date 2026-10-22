#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long ans = 0;
        bool flag = true;
        for(int i=0;i<n-1;i++){
            if(a[i] == 0 && flag) continue;
            else{
                flag = false;
                if(a[i] == 0 )ans++;
                else ans+=a[i];
            }
        }
        if(!flag) cout<<ans<<'\n';
        else cout<<0<<'\n';
    }
    return 0;
}