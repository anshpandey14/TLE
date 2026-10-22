#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans = 0;
    for(int i=0;i<n-1;i++){
        if(gcd(a[i],a[i+1]) !=1 ){
            ans++;
            a.insert(a.begin()+i+1,1);
            n++;
        }
    }
    cout<<ans<<'\n';
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<'\n';
    return 0;
}