#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int l=0,r=n-1;
        int ans = 0;
        int sum1 = a[l],sum2=a[r];
        while(l<r){
            if(sum1 == sum2) {
                ans = l+n-r+1;
            }
            if(sum1 > sum2) {
                r--;
                sum2+=a[r];
            }
            else {
                l++;
                sum1+=a[l];
            }
        }
        cout<<ans<<'\n';
    }
}