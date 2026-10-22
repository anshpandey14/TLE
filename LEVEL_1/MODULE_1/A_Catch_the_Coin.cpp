#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        // if(x>=0 && y>=0) cout<<"YES"<<"\n";
        if(y<-1) cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";
    }
    return 0;
}