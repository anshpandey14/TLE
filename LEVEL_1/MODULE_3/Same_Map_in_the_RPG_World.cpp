#include<bits/stdc++.h>
using namespace std;
int main(){
    int h,w;
    cin>>h>>w;
    vector<vector<char>> a(h,vector<char>(w));
    vector<vector<char>> b(h,vector<char>(w));
    unordered_map<int,int>mp;
    unordered_map<int,int>mp2;
    for(int i=0;i<h;i++){
        int q = 0;
        for(int j=0;j<w;j++){
            cin>>a[i][j];
            if(a[i][j] == '#') q++;
        }
        mp[q]++;
    }
    for(int i=0;i<h;i++){
        int q = 0;
        for(int j =0;j<w;j++){
            cin>>b[i][j];
            if(b[i][j] == '#') q++;
        }
        mp[q]--;
        if (mp[q] == 0) {
            mp.erase(q);
        }
    }

    for(int j=0;j<w;j++){
        int q = 0;
        for(int i=0;i<h;i++){    
            if(a[i][j] == '#') q++;
        }
        mp2[q]++;
    }
    for(int j=0;j<w;j++){
        int q = 0;
        for(int i=0;i<h;i++){
            if(b[i][j] == '#') q++;
        }
        mp2[q]--;
        if (mp2[q] == 0) {
            mp2.erase(q);
        }
    }
    if(mp.size()==0 && mp2.size() == 0) cout<<"Yes";
    else cout<<"No";
    return 0;
}