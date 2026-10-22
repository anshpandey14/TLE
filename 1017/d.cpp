#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string p;
        cin>>p;
        string s;
        cin>>s;
        int countl = 0,countr = 0,l=0,r=0;
        for(int i=0;i<p.length();i++){
            if(s[i] == 'L'){
                countl++;
            }
            else{
                countr++;
            }
        }
        for(int i=0;i<s.length();i++){
            if(s[i] == 'L'){
                l++;
            }
            else{
                r++;
            }
        }
        if(l<=(2*countl) && r<=(2*countr)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}