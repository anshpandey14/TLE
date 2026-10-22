#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,l,r;
        cin>>n>>m>>l>>r;
        int inf1 = 0;
        int inf2 = 0;
        int diff = n-m;
        if(diff>0){
            while(m>0){
                if(inf1>l){
                    inf1--;
                    m--;
                }
                if(m==0){
                    break;
                }
                if(inf2<r){
                    inf2++;
                m--;
                }
            }
            cout<<inf1<<" "<<inf2<<endl;    
        }
        else{
            cout<<l<<" "<<r<<endl;
        }
    }
    return 0;
}