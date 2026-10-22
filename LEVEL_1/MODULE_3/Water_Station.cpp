#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k = n%5;
    if(k<=2) cout<<n-k;
    else cout<<n+(5-k);
    return 0;
}