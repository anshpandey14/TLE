#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long ans = 1;
        for(long long i=2;i*i<=n;i++){
            if(n%i==0){
                ans = n/i;
                break;
            }
        }
        cout<<ans<<" "<<n-ans<<'\n';
    }
    return 0;
}