#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int start = a[0]-0;
        //cout<<"Start"<<start<<endl;
        int end = 2*(x-a[n-1]);
        //cout<<"end"<<end<<endl;
        int diff = 0;
        for(int i=0;i<n-1;i++){
            if(a[i+1]-a[i]>diff){
                diff = a[i+1] - a[i];
            }
        }
        //cout<<diff<<"diff"<<endl;
        cout<<max(start,max(end,diff))<<endl;
    }
}