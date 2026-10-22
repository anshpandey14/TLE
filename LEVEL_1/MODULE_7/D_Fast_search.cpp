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
    int k;
    cin>>k;
    for(int i=0;i<k;i++){
        int m,o;
        cin>>m>>o;
        int p=-1,q=-1;
        int s=0;
        int e = n-1;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(a[mid]>=m) {
                p=mid;
                e = mid-1;
            }
            else s=mid+1;            
        }
        s=0;
        e = n-1;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(a[mid]>o) e = mid-1;
            else{
                q=mid;
                s=mid+1;
            }
        }
        if(p == -1 || q == -1 || p>q) cout<<0<<" ";
        else cout<<(q-p+1)<<" ";
    }
    return 0;
}