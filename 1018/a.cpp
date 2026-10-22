#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int end= n+1;
        int start = 0;
        vector<int> ans;
        int sum = 0;
        for(int i=n-2;i>=0;i--){
            if(s[i] == '<'){
                ans.push_back(start+1);
                sum = sum+start+1;
                start++;
            }
            else{
                ans.push_back(end-1);
                sum = sum+end-1;
                end--;
            }
        }
        int total = (n*(n+1))/2;
        int p = total - sum;
        ans.push_back(p);
        reverse(ans.begin(),ans.end());
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}
