#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    int ans = 0;
    for(auto &it:mp){
        if(it.second > it.first) ans+= it.second-it.first;
        else if(it.second < it.first) ans+= it.second;
    }
    cout<<ans;
    return 0;
}