#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> s(n);
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        vector<vector<int>> a(n,vector<int> (n,0));
        vector<vector<int>> b(n,vector<int> (n,0));
        vector<vector<int>> c(n,vector<int> (n,0));
        vector<vector<int>> d(n,vector<int> (n,0));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                a[i][j] = s[i][j]-'0';
            }
        }

        // ksksk
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                b[i][j] = a[j][n-i-1];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                c[i][j] = a[n-i-1][n-j-1];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                d[i][j] = a[n-j-1][i];
            }
        }

        // skksks
        int sol = 0;
        int ans = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i][j] != b[i][j]) ans++;
            }
        }
        sol = max(sol,ans/2);
        // cout<<sol<<" "<<ans<<endl;
        ans = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i][j] != c[i][j]) ans++;
            }
        }
        sol = max(sol,ans/2);
        // cout<<sol<<" "<<ans<<endl;
        ans = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i][j] != d[i][j]) ans++;
            }
        }
        sol = max(sol,ans/2);
        // cout<<sol<<" "<<ans<<endl;
        cout<<sol<<'\n';
    }
    return 0;
}