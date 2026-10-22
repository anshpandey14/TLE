#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>> a(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        string row;
        cin >> row;
        for (int j = 0; j < n; j++) {
            a[i][j] = row[j] - '0'; // Convert character to integer
        }
    }
    vector<vector<int>> b = a;
    for(int j=0;j<n;j++){
        if(j==0) b[0][j] = a[1][j];
        else b[0][j] = a[0][j-1];
    }
    for(int i=1;i<n;i++){
        b[i][n-1] = a[i-1][n-1];
    }
    for(int j=n-2;j>=0;j--){
        b[n-1][j] = a[n-1][j+1];
    }
    for(int i=n-2;i>0;i--){
        b[i][0] = a[i+1][0];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<b[i][j];
        }
        cout<<'\n';
    }
    return 0;
}