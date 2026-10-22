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
        int c = 0;
        bool flag = true;
        for(int i=0;i<n;i++){
            if(s[i] == '.'){
                c++;
            }
            else {
                if(c>2){
                    cout<<2<<'\n';
                    flag = false;
                    break;
                }
                else{
                    ans+=c;
                    c=0;
                }
            }
        }
        if(flag){
            if(c>2) ans = 2;
            else ans+=c;
            cout<<ans<<'\n';
        }
    }
    return 0;
}