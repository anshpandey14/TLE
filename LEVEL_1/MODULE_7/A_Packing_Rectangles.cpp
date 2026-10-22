#include<bits/stdc++.h>
using namespace std;

int main(){
    long long w,h,n;
    cin>>w>>h>>n;
    long long s = 0;
    long long e = 1;
    while(true){
        long long a = e/w;
        long long b = e/h;
        if(a*b >= n) break;
        e *= 2;
    }
    long long mid = s+(e-s)/2;
    long long ans = 0;
    while(s<=e){
        mid = s+(e-s)/2;
        long long a = mid/w;
        long long b = mid/h;
        if(a*b >= n){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    cout<<ans;
    return 0;
}