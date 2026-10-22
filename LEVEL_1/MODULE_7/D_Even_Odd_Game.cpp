#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a;
        vector<int> b;
        for(int i=0;i<n;i++){
            int ti;
            cin>>ti;
            if(ti%2==0) a.push_back(ti);
            else b.push_back(ti);
        }
        if(a.size() == n) {
            cout<<"Alice"<<'\n';
            continue;
        }
        else if(b.size() == n) {
            cout<<"Bob"<<'\n';
            continue;
        }
        else{
            sort(a.begin(),a.end(),greater<int>());
            sort(b.begin(),b.end(),greater<int>());
            long long u=0, v=0;
            int s = 0;
            int p = 0;
            if(a.size() < b.size()){
                s = a.size();
                p=0;
            }
            else if(a.size() > b.size()){
                s = b.size();
                p=1;
            }
            for(int i=0;i<s;i++){
                u+=a[i];
                v+=b[i];
            }
            bool f = false;
            int larger_size = (p == 0) ? b.size() : a.size();
            for(int i=s; i < larger_size; i++){
                if(!f) {
                    f = true;
                    if(p==1) u+=a[i];   
                }
                else{
                    f = false;
                    if(p==0) v+=b[i];
                }
            }
            if(u>v) cout<<"Alice"<<'\n';
            else if(u==v) cout<<"Tie"<<'\n';
            else cout<<"Bob"<<'\n'; 
        }
           
    }
    return 0;
}