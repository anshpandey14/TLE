#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];   
        }
        bool flag = true;
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                flag = false;
                break;
            }
        }
        if(flag){
            int mini = INT_MAX;
            for(int i=0;i<n-1;i++){
                if((a[i+1]-a[i])<=mini){
                    mini = a[i+1]-a[i];
                }
            }
            cout<<mini/2+1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
}