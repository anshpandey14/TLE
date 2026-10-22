#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        int q = 0,p =0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2 == 0 && i%2 == 1) p++;
            else if(a[i]%2 == 1 && i%2 == 0) q++;
        }
        if(q==p) cout<<q<<'\n';
        else cout<<-1<<'\n';
    }
    return 0;
}