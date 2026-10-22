#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        long long ans = INT_MIN;
        int sol = 0;
        for(int i=2;i<=n;i++){
            long long sum = 0;
            for(int j=i;j<=n;j+=i){
                sum+=j;
            }
            if(sum>ans){
                ans = sum;
                sol = i;
            }
        }
        cout<<sol<<'\n';
    }
    return 0;
    
}