#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long c = 0;
    long long q = n;
    long long size = 0;
    long long p = 0;
    while(q>0){
        p = q%10;
        if(p!=0) c++;
        q = q/10;
        size++;
    }
    // cout<<p<<'\n';
    if(size == 1){
        cout<<1;
    }
    else if(size == 2){
        if(c==1) cout<<10;
        else {
            long long temp = (p + 1) * 10;
            cout << temp - n;
        }
    }
    else if(size==3){
        if(c==1) cout<<100;
        else {
            long long temp = (p+1) * 100;
            // cout<<temp<<endl;
            cout<<temp-n;
        }
    }
    else if(size==4){
        if(c==1) cout<<1000;
        else {
            long long temp = (p+1) * 1000;
            cout<<temp-n;
        }
    }
    else if(size==5){
        if(c==1) cout<<10000;
        else {
            long long temp = (p+1) * 10000;
            cout<<temp-n;
        }
    }
    else if(size==6){
        if(c==1) cout<<100000;
        else {
            long long temp = (p+1) * 100000;
            cout<<temp-n;
        }
    }
    else if(size==7){
        if(c==1) cout<<1000000;
        else {
            long long temp = (p+1) * 1000000;
            cout<<temp-n;
        }
    }
    else if(size==8){
        if(c==1) cout<<10000000;
        else {
            long long temp = (p+1) * 10000000;
            cout<<temp-n;
        }
    }
    else if(size==9){
        if(c==1) cout<<100000000;
        else {
            long long temp = (p+1) * 100000000;
            cout<<temp-n;
        }
    }
    else if(size==10){
        if(c==1) cout<<1000000000;
        else {
            long long temp = (p+1) * 1000000000;
            cout<<temp-n;
        }
    }
    return 0;
}