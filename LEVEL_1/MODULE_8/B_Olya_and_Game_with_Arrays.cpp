#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>> a(n);
        for(int i=0;i<n;i++){
            int c;
            cin>>c;
            a[i].resize(c);
            for(int j=0;j<c;j++){
                cin>>a[i][j];
            }
            sort(a[i].begin(),a[i].end());
        }
        int minif = INT_MAX;
        int minis = INT_MAX;
        int minIndexs = 0;
        long long ans = 0;
        for(int i=0;i<n;i++){
            if(a[i][0] < minif){
                minif = a[i][0];
            }  
            if(a[i][1] < minis){
                minis = a[i][1];
                minIndexs = i;
            }  
            ans+= a[i][1];
        }
        ans+=minif-a[minIndexs][1];
        cout<<ans<<'\n';
    }
    return 0;
}