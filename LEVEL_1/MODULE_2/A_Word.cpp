#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int l = 0;
    int u = 0;
    for(auto &t:s){
        if(t>='A' && t<='Z') u++;
        else l++;
    }
    if(l>=u){
        for(auto &t:s){
            t = tolower(t);
        }
    }
    else{
        for(auto &t:s){
            t = toupper(t);
        }
    }
    cout<<s;
    return 0;
}