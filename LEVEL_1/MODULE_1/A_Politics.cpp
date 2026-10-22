#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<string>s;
        int ans = 1;
        for(int i=0;i<n;i++){
            string t;
            cin>>t;
            s.push_back(t);
            if(i>0){
                if(s[0] == s[i]) ans++;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
