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
        int blank = 0;
        int ans = 0;
        for(int i=0;i<n;i++){
            if(a[i] == 0){
                blank++;
                ans = max(blank,ans);
            }
            else{
                blank = 0;
            }
        }
        cout<<ans<<endl;
    }
}