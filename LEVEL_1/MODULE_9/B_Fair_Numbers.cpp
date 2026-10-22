#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        for(long long i=n;i<=1e18;i++){
            long long p = i,q=i;
            bool flag = true;
            while(q>0){
                int z = q%10;
                if(z==0) {
                    q/=10;
                    continue;
                }
                if(p%z!=0){
                    flag = false;
                    break;
                }
                q/=10;
            }
            if(flag) {
                cout<<p<<'\n';
                break;
            }
        }
    }
    return 0;
}