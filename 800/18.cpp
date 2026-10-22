#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,k;
        cin>>x>>k;
        vector<int> ans;
        int q = x;
        int p = x;
        while(1){
            if(p%k!=0 && (q-p)>=0){
                q = q-p;
                ans.push_back(p);
                p--;
                if(q==0){
                    break;
                }
            }
            else{
                p--;
            }
        }
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}