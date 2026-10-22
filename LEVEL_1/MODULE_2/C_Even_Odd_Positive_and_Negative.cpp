#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int e = 0,o=0,p=0,ne=0;
    while(n--){
        int t;
        cin>>t;
        if(t%2){
            o++;
            if(t>0) p++;
            else if(t<0) ne++;
        }
        else {
            e++;
            if(t>0) p++;
            else if(t<0) ne++;
        }
    }
    cout<<"Even: "<<e<<'\n';
    cout<<"Odd: "<<o<<'\n';
    cout<<"Positive: "<<p<<'\n';
    cout<<"Negative: "<<ne<<'\n';

    return 0;
}