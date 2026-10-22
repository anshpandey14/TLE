#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int c = 0;
    while(t--){
        int n,r;
        cin>>n>>r;
        unordered_map<int,unordered_set<int>> mp;
        bool flag = true;
        for(int i=0;i<r;i++){
            int a,b;
            cin>>a>>b;
            if(mp[a].count(b) > 0){
                flag = false;
            }
            else mp[a].insert(b);
        }
        if(flag) cout<<"Scenario #"<<++c<<": possible"<<'\n';
        else cout<<"Scenario #"<<++c<<": impossible"<<'\n';
    }
    return 0;
}