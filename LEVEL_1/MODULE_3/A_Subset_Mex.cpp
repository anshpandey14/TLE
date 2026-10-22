#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        // bool flag = true;
        map<int,int> mp;
        int ans = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
            // if(a[i] == 0) flag = false;
        }
        // if(flag){
        //     cout<<0<<'\n';
        //     continue;
        // }
        // else{
            int k = -1; 
            bool t = false,u=false;
            int q = 0;
            for(auto &i:mp){
                k++;
                if(i.first!=k){
                    if(q!=0 && !t){
                        ans+=k;
                        t= true;
                        break;
                    }
                    else if(!t){
                        ans+=k;
                        if(!u){
                            ans+=k;
                            u=true;
                            t=true;
                            break;
                        }
                        t = true;
                        q++;
                        break;
                    }
                   
                }
                else if(i.second<2){
                    if(q!=0 && !u){
                        ans+=i.first;
                        u = true;
                        break;
                    }
                    else if(!u) {
                        ans+=i.first;
                        u = true;
                        q++;
                    }
                }
            }
            if(!u) ans+=k+1;
            if(!t) ans+=k+1;
        // }
        cout<<ans<<'\n';
    }
    return 0;
}