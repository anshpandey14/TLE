#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int w;
    cin>>w;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    unordered_map<int,int> mp;
    int ans = 0;
    for(int i=0;i<n;i++){
        if(a[i]<=w) {
            if(mp.find(a[i])==mp.end()){
                mp[a[i]]++;
                ans++;
            }
        }
    }
    if(n>1){
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]+a[j]<=w) {
                    if(mp.find(a[i]+a[j])==mp.end()){
                        mp[a[i]+a[j]]++;
                        ans++;
                    }
                }
            }
        }
    }
    if(n>2){
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if(a[k]+a[j]+a[i] <=w) {
                        if(mp.find(a[i]+a[j]+a[k])==mp.end()){
                            mp[a[k]+a[j]+a[i]]++;
                            ans++;
                        }
                    }
                }
            }
        }
    }
    cout<<ans;
    return 0;
}