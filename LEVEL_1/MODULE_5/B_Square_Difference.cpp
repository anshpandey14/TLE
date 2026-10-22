#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long t){
    if(t <= 1) return false;
    if(t <= 3) return true;
    if(t%2==0 || t%3==0) return false;
    for(long long i=3;i*i<=t;i++){
        if(t%i ==0) return false;
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        long long g = a-b;
        long long h = a+b;
        bool prime1 = isPrime(g);
        bool prime2 = isPrime(h);
        if(g==1) prime1 = true;
        if(h==1) prime2 = true;
        if(prime1 && prime2) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
}