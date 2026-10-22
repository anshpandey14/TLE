#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        // for(int i=1;i<n-1;i++){
        //     if(a[i-1]<a[i] && a[i]>a[i+1]){
        //         swap(a[i],a[i+1]);
        //     }
        // }
        // bool ans = true;
        // for(int i=0;i<n-1;i++){
        //     if(a[i+1]<a[i]){
        //         ans = false;
        //         break;
        //     }
        // }
        // if(ans){
        //     cout<<"YES"<<endl;
        // }
        // else{
        //     cout<<"NO"<<endl;
        // }
        if(a[0] == 1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}