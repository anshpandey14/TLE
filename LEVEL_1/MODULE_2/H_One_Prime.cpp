#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    if(x==2){
        cout<<"YES";
        return 0;
    }
    for(int i=3;i<x;i++){
        if(x%i == 0){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}