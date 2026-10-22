#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int size = s.length();
        s[size-2] = 'i';
        s.erase(size-1);
        cout<<s<<endl;
    }
}