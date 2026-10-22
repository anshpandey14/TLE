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
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[a[i]-i]++;
        }
        long long ans = 0;
        for(auto &i:mp){
            long long q = i.second;
            if(q>1) ans+= (q*(q-1)) / 2;
        }
        cout<<ans<<'\n';
    }
    return 0;
}