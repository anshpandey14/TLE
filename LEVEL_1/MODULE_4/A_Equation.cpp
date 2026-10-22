#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long x){
    if(x<2) return false;
    for(long long i=2;i*i<=x;i++){
        if(x%i==0) return false;
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    int j = 4;
    while(true){
        long long i=j+n;
        if(!isPrime(i) && !isPrime(j)){
            cout<<i<<" "<<j;
            break;
        }
        j++;
    }
    return 0;
}