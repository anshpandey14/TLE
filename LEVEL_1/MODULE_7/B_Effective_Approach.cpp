#include<bits/stdc++.h>
using namespace std;

pair<long long,long long> bs(int &t,vector<int> &pre){
    int l = 1;
    int n = pre.size();
    int r = n-1;
    int mid = l+(r-l)/2;
    while(l<=r){
        mid = l+(r-l)/2;
        if(mid == t){
            return {pre[mid],n-pre[mid]};
        }
        else if(mid<t) l=mid+1;
        else r=mid-1;
    }
    return {pre[mid],n-pre[mid]};
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> pre(n+1,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
        pre[a[i]] = i+1;
    }
    int m;
    cin>>m;
    vector<int> b(m);
    pair<long long,long long> ans({0,0});
    for(int i=0;i<m;i++){
        cin>>b[i];
        auto res = bs(b[i],pre);
        ans.first += res.first;
        ans.second += res.second;
    }
    cout<<ans.first<<" "<<ans.second;
}