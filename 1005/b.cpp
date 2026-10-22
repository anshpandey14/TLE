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
        int left = 0;
        int right = 0;
        for(int i=0;i<n;i++){
           mp[a[i]]++;
        }
        int maxi = INT_MIN;
        for(auto it:mp){
            if(it.second > maxi){
                maxi = it.second;
            }
        }
        
    }
}