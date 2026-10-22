#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans = INT_MIN;
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                ans = max(ans,gcd(i,j));
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}