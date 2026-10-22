#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin>>n;
    bool flag = true;
    int t = 0;
    while(n>0){
        t = n%10;
        if(flag){
            if(t>8){
                cout<<"NO"<<'\n';
                return;
            }
            flag = false;
        }
        else if(t==0){
            cout<<"NO"<<'\n';
            return;
        }
        n/=10;
    }
    if(t==1){
        cout<<"YES"<<'\n';
    }
    else cout<<"NO"<<'\n';
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}