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
        int a = 0;
        int b = 0;
        bool flag = true;
        for(auto &it:s){
            if(it == 'T') a++;
            else b++;
            if(b>a){
                flag = false;
                cout<<"NO"<<'\n';
                break;
            }
        }
        if(!flag){
            continue;
        }
        a = 0;
        b = 0;
        for(int i=n-1;i>=0;i--){
            if(s[i] == 'T') a++;
            else b++;
            if(b>a){
                flag = false;
                cout<<"NO"<<'\n';
                break;
            }
        }
        if(flag) {
            if(2*b == a) cout<<"YES"<<'\n';
            else cout<<"NO"<<'\n';
        }
    }
    return 0;
}