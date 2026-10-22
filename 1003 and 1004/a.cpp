#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int l = x;
        int r = y;
        if(x==y){
            cout<<"NO"<<endl;
        }
        else{
            int p = 0;
            x= x+1;
            while(x){
                int m = x%10;
                p = p+m;
                x=x/10;
            }
            int q =0;
            while(p){
                int n = p%10;
                q = q+n;
                p=p/10;
            }
            if(q == y && ){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}