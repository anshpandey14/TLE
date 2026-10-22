#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    set<string> st;
    for(int i=s.size()-1;i>=0;i--){
        if(st.find(s[i])!= st.end()) continue;
        else {
            st.insert(s[i]);
            cout<<s[i]<<'\n';
        }
    }
    return 0;
}