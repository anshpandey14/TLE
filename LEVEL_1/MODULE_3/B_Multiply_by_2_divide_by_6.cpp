#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        unordered_set<long long > st;
        long long  ans = 0;
        bool flag = false;
        while(n!=1){
            st.insert(n);
            if(n%6 == 0) n = n/6;
            else n = n*2;
            if(st.find(n) != st.end()){
                cout<<-1<<"\n";
                flag = true;
                break;
            }
            ans++;
        }
        if(!flag) cout<<ans<<'\n';
    }
    return 0;
}