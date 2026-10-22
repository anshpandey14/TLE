#include<bits/stdc++.h>
using namespace std;
 
bool bs(long long mid,long long k,vector<long long> &a){
    long long s = 0;
    for(long long &i:a){
        s += min(mid,i);
    }
    if(s >= k*mid) return true;
    else return false;
}
 
int main(){
    long long k;
    cin>>k;
    long long n;
    cin>>n;
    vector<long long> a(n);
    long long sum = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum += a[i];
    }
    long long s = 0;
    long long e = sum/k;
    long long mid = s+(e-s)/2;
    long long ans = 0;
    while(s<=e){
        mid = s+(e-s)/2;
        if(bs(mid,k,a)){
            ans = mid;
            s = mid+1;
        }
        else e = mid-1;
    }
    cout<<ans;
    return 0;
}