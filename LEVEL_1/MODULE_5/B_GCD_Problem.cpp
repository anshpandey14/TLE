#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin>>n;
    int i=1;
    for(int i=1;i<100;i++){
        bool flag = false;
        for(int j=i+1;j<100;j++){
            int t = gcd(i,j);
            if(t+i+j == n && t!=i && t!=j){
                cout<<i<<" "<<j<<" "<<t<<'\n';
                flag = true;
                break;
            }
        }
        if(flag) break;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}