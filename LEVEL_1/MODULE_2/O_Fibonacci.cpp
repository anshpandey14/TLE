#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n==1){
        cout<<0;
        return 0;
    }
    if(n==2) {
        cout<<1;
        return 0;
    }
    long long a = 0;
    long long b = 1;
    long long ans = 0;
    for(int i=3;i<=n;i++){
        ans = a+b;
        a = b;
        b = ans;
    }
    cout<<ans;
    return 0;
}