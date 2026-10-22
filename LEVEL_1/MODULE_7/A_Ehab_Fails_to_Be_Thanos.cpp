#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(2*n);
    for(int i=0;i<2*n;i++){
        cin>>a[i];
    }
    int t = a[0];
    bool flag = true;
    for(int &i:a){
        if(t==i){
            continue;
        }
        else{
            flag = false;
            break;
        }
    }
    if(flag) cout<<-1;
    else{
        sort(a.begin(),a.end());
        for(int &i:a){
            cout<<i<<" ";
        }
    }
    return 0;
}