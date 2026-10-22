#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> b(k);
    for(int i=0;i<k;i++){
        cin>>b[i];
    }
    for(int i=0;i<k;i++){
        int s = 0;
        int e = n-1;
        int ans=-1;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(a[mid]>b[i]){
                e=mid-1;
            }
            else{
                ans = mid;
                s=mid+1;
            }
        }
        if(ans==-1) cout<<0<<'\n';
        else cout<<ans+1<<'\n';
    }
    return 0;
}