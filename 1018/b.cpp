#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> l(n);
        vector<int> r(n);
        for(int i=0;i<n;i++){
            cin>>l[i];
        }
         for(int i=0;i<n;i++){
            cin>>r[i];
        }
        // sort(l.begin(),l.end());
        // sort(r.begin(),r.end());
        int sum = 0;
        for(int i=0;i<l.size();i++){
            if(l[i] == r[i]){
                sum = sum+2*l[i];
            }
            else{
                sum = sum+min(l[i],r[i]);
            } 
        }
        sum = sum+1;
        cout<<sum<<endl;
    }
}
