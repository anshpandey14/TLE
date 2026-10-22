#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string ans= "";
    for(char &i:s){
        if(i=='A' || i=='E' || i=='I' || i=='O' || i=='U' || i=='Y' || i=='a' || i=='e' || i=='i' || i=='o' || i=='u' || i=='y') continue;
        else{
            ans += '.';
            if(i>=65 && i<= 90){
                ans += i+32;
            }
            else ans+=i;
        }
    }
    cout<<ans;
}