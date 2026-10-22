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
        vector<int> b,c;
        sort(a.begin(),a.end());
        for(int i=1;i<n;i++){
            if(a[i]%a[0]==0){
                b.push_back(a[i]);
            }
            else{
                c.push_back(a[i]);
            }
        }
        if(b.size()!=0 && c.size()!=0){
            cout<<b.size()<<" "<<c.size()<<endl;
            for(int i=0;i<b.size();i++){
                cout<<b[i]<<" ";
            }
            cout<<endl;
            for(int i=0;i<c.size();i++){
                cout<<c[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}