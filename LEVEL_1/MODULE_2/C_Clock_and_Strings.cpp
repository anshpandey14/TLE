#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        bool flag1 = true,flag2 = true;
        if(a<=c && b>=c) flag1 = false;
        if(a<=d && b>=d) flag2 = false;
        if(c<=a && d>=a) flag1 = false;
        if(c<=b && d<=b) flag2 = false;
        if(flag1 || flag2) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
}