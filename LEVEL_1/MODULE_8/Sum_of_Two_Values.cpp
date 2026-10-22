#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,x;
    cin>>n>>x;
    vector<long long> a(n);
    for(long long i=0;i<n;i++){
        cin>>a[i];
    }
    map<long long,long long> mp;
    vector<long long> ans;
    for(long long i=0;i<n;i++){
        long long c = x-a[i];
        if(mp.find(c) != mp.end()){
            cout<<mp[c]<<" "<<i+1;
            ans.push_back(mp[c]);
            ans.push_back(i+1);
            break;
        }
        mp[a[i]] = i+1;
    }
    if(ans.size() == 0) cout<<"IMPOSSIBLE";
    return 0;
}