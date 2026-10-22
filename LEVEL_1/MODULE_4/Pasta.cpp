#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n),b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    for(int j=0;j<m;j++){
        bool flag = false;
        for(int i=0;i<n;i++){
            if(b[j] == a[i]){
                a[i] = 0;
                flag = true;
                break;
            }
        }
        if(!flag){
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
    return 0;
}