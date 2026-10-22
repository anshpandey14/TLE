#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        bool flag = false;
        for(int i=0;i<s.length()-1;i++){
            if(s[i] == s[i+1]){
                flag =true;
                break;
            }
        }
        if(flag){
            cout<<1<<endl;
        }
        else{
            cout<<s.length()<<endl;
        }
        
    }
}