#include<bits/stdc++.h>
using namespace std;
int main(){
    int y;
    cin>>y;
    while(true){
        int t = ++y;
        unordered_set<int> s;
        while(t>0){
            s.insert(t%10);
            t/=10;
        }
        if(s.size() == 4){
            cout<<y;
            return 0;
        }
        else s.clear();
    }
}