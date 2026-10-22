#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int b;
        cin>>b;
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(a[i]<a[i-1]){
                ans[i] = b-a[i];
            }
        }
        bool flag =true;
        for(int i=1;i<n;i++){
            if(a[i]<a[i-1]){
                flag =false;
                break;
            }
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }     
    }
}