#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,s;
    cin>>k>>s;
    int c = 0;
    for(int i=0;i<=k;i++){
        if(i> s) break;
        for(int j=0;j<=k;j++){
            if(s-i-j >= 0 && s-i-j <=k) c++;
        }
    }
    cout<<c;
    return 0;
}