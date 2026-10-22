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
        map<int,int> mp;
        for(int i = 0;i<n;i++){
            mp[a[i]]++;
        }
        int number = 0;
        int even = 0;
        int odd = 0;
        for(auto const it:mp){
            if(it.second % 2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        number = odd + even;
        if(number>2){
            if(even &&odd){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        else{
            if(even && odd){
                cout<<"NO"<<endl;
            }
            else{
                if()
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}