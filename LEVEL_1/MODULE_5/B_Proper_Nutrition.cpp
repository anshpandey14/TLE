#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long a,b;
    cin>>a>>b;
    if(n%a==0){
        cout<<"YES"<<'\n';
        cout<<n/a<<" "<<0<<'\n';
    }
    else if(n%b==0){
        cout<<"YES"<<'\n';
        cout<<0<<" "<<n/b<<'\n';
    }
    else{
        while(true){
            
        }

    }
}