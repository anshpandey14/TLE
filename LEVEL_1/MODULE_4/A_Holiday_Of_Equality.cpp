#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
        maxi = max(maxi,a[i]);
    }
    long long ans=0;
    for(int i=0;i<n;i++){
        if(a[i] < maxi) ans+=maxi-a[i];
    }
    cout<<ans;
    return 0;
}