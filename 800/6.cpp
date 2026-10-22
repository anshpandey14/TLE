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
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }
        if(mp.size()>2){
            cout<<"NO"<<endl;
        }
        else if(mp.size()==1){
            cout<<"YES"<<endl;
        }
        else{
            auto it = mp.begin();
            int f = it->second;
            int s = 0;
            if(mp.size()==2){
                it++;
                s = it->second;
            }
            if(abs(f-s)<=1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}