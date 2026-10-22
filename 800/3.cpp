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
        int total= 0;
        int count = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='.'){
                total++;
                count++;
            }
            else{
                if(count<=2){
                    count = 0;
                }
            }
        }
        if(count > 2){
            cout<<2<<endl;
        }
        else{
            cout<<total<<endl;
        }
    }
}