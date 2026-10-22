#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i] ==0 ){
            cout<<0;
            return 0;
        }
    } 
    long long p = 1;
    long long maxi = 1000000000000000000LL;
    for(int i=0;i<n;i++){
        if(a[i] > (maxi/p)){
            cout<<-1;
            return 0;
        }
        else p*=a[i];
    }
    cout<<p;
    return 0;
}