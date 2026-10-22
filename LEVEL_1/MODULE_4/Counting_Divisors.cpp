#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        int ans = 0;
        for(int j=1;j*j<=x;j++){
            if(x%j == 0){
                ans++;
                if(j!=x/j) ans++;
            }
            
        }
        cout<<ans<<'\n';
    }
    return 0;
}