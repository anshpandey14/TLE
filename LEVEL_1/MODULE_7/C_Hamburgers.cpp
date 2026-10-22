#include<bits/stdc++.h>
using namespace std;

bool bs(long long mid,int a1,int a2,int a3,int a,int b,int c,int u,int v,int w,long long r){
    long long t1 = a1*mid;
    long long t2 = a2*mid;
    long long t3 = a3*mid;
    t1-=a;
    t2-=b;
    t3-=c;
    if(t1 < 0) t1 = 0;
    if(t2 < 0) t2 = 0;
    if(t3 < 0) t3 = 0;
    long long sum = t1*u+t2*v+t3*w;
    if(sum<=r) return true;
    else return false;
}

int main(){
    string s;
    cin>>s;
    int a1=0,a2=0,a3=0;
    for(char &i:s){
        if(i=='B') a1++;
        else if(i=='S') a2++;
        else if(i=='C') a3++;
    }
    int a,b,c;
    cin>>a>>b>>c;
    int u,v,w;
    cin>>u>>v>>w;
    long long r;
    cin>>r;
    long long l = 0;
    long long h = 1e13;
    long long ans = 0;
    long long mid = l+(h-l)/2; 
    while(l <= h){
        mid = l+(h-l)/2; 
        if(bs(mid,a1,a2,a3,a,b,c,u,v,w,r)){
            ans = mid;
            l = mid+1;
        }
        else h = mid-1;
    }
    cout<<ans;
    return 0;
}