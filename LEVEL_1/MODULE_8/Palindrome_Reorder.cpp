#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    unordered_map<char,int> mp;
    for(char &i:s){
        mp[i]++;
    }
    int o = 0,e=0;
    string ans = "";
    string r = "";
    for(auto &i:mp){
        if(i.second%2==1) o++;
        else e++;
    }
    if(e>0 && o>1){
        cout<<"NO SOLUTION";
        return 0;
    }
    else if(e==0){
        if(o==1) {
            cout<<s;
            return 0;
        }
        else if(o>1){
            cout<<"NO SOLUTION";
            return 0;
        }
    }
    else{
        for(auto &i:mp){
            if(i.second%2==0){
                for(int j=0;j<i.second/2;j++){
                    ans+=i.first;
                }
            }
            else{
                r = i.first;
                for(int j=0;j<i.second/2;j++){
                    ans+=i.first;
                }
            }
        }
    }
    string d = ans;
    reverse(d.begin(),d.end());
    ans+=r;
    ans+= d;
    cout<<ans;
    return 0;
}