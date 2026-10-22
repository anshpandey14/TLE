#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,h,m;
        cin>>n>>h>>m;
        int a1 = 25,a2=61;
        bool flag = true;
        for(int k=0;k<n;k++){
            int i,j;
            cin>>i>>j;
            int p = 0;
            int q = 0;
            if(i==h && j==m){
               p=0;
               q=0;
            }
            else if(i>h || (i==h && j>m)){
                if(j>=m){
                    p=i-h;
                    q=j-m;
                }else{
                    p = i-h-1;
                    q = (60-m)+j;
                }
            }
            else{
                if(j>=m){
                    p =(24-h)+i;
                    q = j-m;
                } else{
                    p = (23-h)+i;
                    q = (60-m)+j;
                }
            }
            if(p<a1){
                a1 = p;
                a2 = q;
            }
            else if(p == a1 && q<a2) a2=q;
        }
       cout<<a1<<" "<<a2<<'\n';
    }
    return 0;
}