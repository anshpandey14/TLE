#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        bool flag = true;
        while(n>0){
            if(n%2==1 && n>1){
                cout<<"YES"<<'\n';
                flag = false;
                break;
            }
            else n/=2;
        }
        if(flag) cout<<"NO"<<'\n';
    }
    return 0;
}