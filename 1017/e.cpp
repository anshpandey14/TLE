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
        long long xor1 = 0;
        long long ans = 0;
        for(int i=0;i<n;i++){
            xor1 = 0;
            for(int j=0;j<n;j++){
                xor1 = xor1+(a[i]^a[j]);
            }
            if(xor1>ans){
                ans = xor1;
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}