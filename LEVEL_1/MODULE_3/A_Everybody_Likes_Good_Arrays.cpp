#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        // ios_base::sync_with_stdio(false);
        // cin.tie(NULL);
        int n;
        cin>>n; 
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n==1){
            cout<<0<<'\n';
            continue;
        }
        int ans = 0;
        while(true){
            int i = 0;
            bool flag = false;
            while(a.size()>1 && (i+1)<a.size()){
                if((a[i] % 2) == (a[i + 1] % 2)){
                    if(a[i]%2 == 0) a[i]=2;
                    else a[i]=1;
                    a.erase(a.begin()+i+1);
                    ans++;
                    flag = true;
                    break;
                }
                i++;
            }
            if(!flag) break;
        }
        cout<<ans<<'\n';
    }
    return 0;
}