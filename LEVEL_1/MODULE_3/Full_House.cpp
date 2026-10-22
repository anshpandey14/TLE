#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    unordered_map<int,int>mp;
    mp[a]++;
    mp[b]++;
    mp[c]++;
    mp[d]++;
    mp[e]++;
    if(mp.size() == 2) {
        for(auto &it:mp){
            if(it.second == 2 || it.second == 3) continue;
            else {
                cout<<"No";
                return 0;
            }
        }
        cout<<"Yes";
    }
    else cout<<"No";
    return 0;
}