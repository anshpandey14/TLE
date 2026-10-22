#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string si;
    cin>>si;
    char dir = 'e';
    pair<int,int> ans({0,0});
    for(auto &i:si){
        if(i == 'S'){
            if(dir == 'e') {
                ans.first++;
            }
            else if(dir == 's') {
                ans.second--;
            }
            else if(dir == 'w') {
                ans.first--;
            }
            else if(dir == 'n') {
                ans.second++;
            }
        }
        else{
            if(dir == 'e'){
                dir = 's';
            }
            else if(dir == 's'){
                dir = 'w';
            }
            else if(dir == 'w'){
                dir = 'n';
            }
            else if(dir == 'n'){
                dir = 'e';
            }
        }
    }
    cout<<ans.first<<" "<<ans.second;
    return 0;
}