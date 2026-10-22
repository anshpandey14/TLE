#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    multiset<int> mp;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        mp.insert(a);
    }
    while(m--){
        int q;
        cin>>q;
        auto it = mp.upper_bound(q);
        if(it == mp.begin()) cout<<-1<<'\n';
        else{ 
            --it;
            cout<<*it<<'\n';
            mp.erase(it);
        }
    }
    return 0;
}