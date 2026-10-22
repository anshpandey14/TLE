#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int> prime;
    for(int i=2;i<=1000;i++){
        bool flag = true;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                flag = false;
                break;
            }
        }
        if(flag) prime.push_back(i);
    }
    int c = 0;
    int z=0;
    while(true){
        int q = prime[z];
        if(q>n) break;
        q-=1;
        for(int i=0;i<prime.size()-1;i++){
            if(prime[i]+prime[i+1] == q){
                c++;
            }
            else if(prime[i]+prime[i+1] > q) break;
        }
        z++;
    }
    if(c>=k) cout<<"YES";
    else cout<<"NO";
    return 0;
}