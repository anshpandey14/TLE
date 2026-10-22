#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    long long ans = 0; 
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        int t = a[i];
        if(a[i] == 1) continue;
        else if(a[i]%2==0){
            while(t>1){
                ans++;
                t/=2;
            }
        }
        else if(a[i]%3==0){
            while(t>1){
                ans++;
                t/=3;
            }
        }
        else {
            cout<<-1;
            return 0;
        }
    }
    cout<<ans;
    return 0;
}