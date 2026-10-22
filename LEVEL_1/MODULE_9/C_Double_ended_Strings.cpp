#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        string b;
        cin>>b;
        int ans = 0;
        int n = a.size();
        int m = b.size();
        for(int i=1;i<=min(m,n);i++){
            for(int j=0;j+i<=n;j++){
                for(int k=0;k+i<=m;k++){
                    if(a.substr(j,i) == b.substr(k,i)) ans = max(ans,i);
                }
            }
        }
        cout<<a.size()+b.size()-2*ans<<'\n';
    }
    return 0;
}