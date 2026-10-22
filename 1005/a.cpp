#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans = 0;
        char ch = '0';
        for(int i=0;i<n;i++){
            if(s[i]!=ch){
                ans++;
                ch = s[i];
            }
        }
        cout<<ans<<endl;
    }
}