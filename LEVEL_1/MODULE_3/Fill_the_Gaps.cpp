#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> ans;
    for(int i=0;i<n-1;i++){
        if(abs(a[i+1]-a[i]) == 1) ans.push_back(a[i]);
        else{
            int k = a[i];
            bool flag = true;
            if(a[i] < a[i+1]) flag = false;
            while(k!=a[i+1]) {
                ans.push_back(k);
                flag == true ? k-- : k++;
            }
        }
    }
    ans.push_back(a[n-1]);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}