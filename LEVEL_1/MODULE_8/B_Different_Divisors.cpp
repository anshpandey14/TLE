#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int> pre;
    for(int i=2;i<=100000;i++){
        bool flag = true;
        for(int j=2;j*j<=i;j++){
           if(i%j == 0){
            flag = false;
            break;
           }
        }
        if(flag) pre.push_back(i);
    }
    while(t--){
        int d;
        cin>>d;
        auto a1 = lower_bound(pre.begin(),pre.end(),d+1);
        auto a2 = lower_bound(pre.begin(),pre.end(),*a1+d);
        long long p1 = *a1;
        long long q1 = *a2;
        cout<<min(p1*q1,p1*p1*p1)<<'\n';
    }
    return 0;
}