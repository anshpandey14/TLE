#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    long long ans = 0;
    for(long i = a;i<=b;i++){
        if(i%c!=0 && i%d!=0) ans++;
    }
    cout<<ans;
    return 0;
}