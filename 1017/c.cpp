#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>>grid(n,vector<int> (n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>grid[i][j];
            }
        }
        vector<int> ans(2*n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int index = i+j+2;
                int value = grid[i][j];
                ans[index-1] = value; 
            }
        }
        int sum = 0;
        for(int i = 1 ;i<ans.size();i++){
            sum = sum+ans[i];
        }
        int total = (2*n*(2*n+1))/2;
        ans[0] = total - sum;
        for(int i = 0 ;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}