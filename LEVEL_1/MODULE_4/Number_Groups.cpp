#include<bits/stdc++.h>
using namespace std;
int main(){
    long long k;
    cin>>k;
    long long a = (k*(k-1))/2;
    long long g = 2*a+1;
    long long ans = 0;
    while(k--){
        ans+=g;
        g+=2;
    }
    cout<<ans;
    return 0;
}