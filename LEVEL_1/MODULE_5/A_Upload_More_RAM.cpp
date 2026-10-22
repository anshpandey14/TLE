#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        long long ans = 0;
        while(n>0){
            int p = k;
            bool flag = true;
            while(p>0){
                ans++;
                if(flag){
                    n--;
                    flag = false;
                }
                if(n==0){
                    cout<<ans<<'\n';
                    break;
                }
                p--;
            }
        }
    }
    return 0;
}