#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        set<int,greater<int>> st;
        for(int i=0;i<n;i++){
            cin>>a[i];
            st.insert(a[i]);
        }
        int ans = 0;
      while(true){
            bool flag = true;
            auto it = st.begin(); 
            while(it != st.end()) {
                int value = *it;
                if(value % 2 == 1) {   
                    it = st.erase(it);                
                } 
                else {
                    flag = false;
                    ans++;                  
                    it = st.erase(it);                   
                    st.insert(value / 2);                    
                    break; 
                }
            }
            if(flag) break;
        }
        cout<<ans<<'\n';
    }
    return 0;
}