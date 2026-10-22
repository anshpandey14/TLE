#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int ans = 1;
    int sol = 1;
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1]) sol++;
        else {
            ans = max(sol,ans); 
            sol = 1;
        }
    }
    ans = max(sol,ans);
    cout<<ans<<'\n';
    return 0;
}