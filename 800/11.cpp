#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int mini = INT_MAX;
    for(int i=0;i<n;i++){
        if(abs(a[i]-0)<mini){
            mini = abs(a[i]-0); 
        }
    }
    cout<<mini<<endl;    
}