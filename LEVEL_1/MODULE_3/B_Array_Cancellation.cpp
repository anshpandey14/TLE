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
        int j = 0;
        int i = 0;
        while(i<n || j<n ){
            while(i<n && a[i] <=0) i++;
            if (j < i) {
                j = i; 
            }
            while(j<n && a[j] >=0 ) j++;
            if (i >= n || j >= n) break;
            if(a[i]>=abs(a[j])){
                a[i] -= abs(a[j]);
                a[j] = 0;
            }
            else {
                a[j] += a[i];
                a[i] = 0;
            }
        }
        long long ans = 0;
        for(int i=0;i<n;i++){
            if(a[i]<0) ans+= abs(a[i]);
        }
        cout<<ans<<'\n';
    }
    return 0;
}