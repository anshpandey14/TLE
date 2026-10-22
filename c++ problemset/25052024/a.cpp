#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
#include<map>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i*j>n){
                    cout<<i<<" "<<j<<endl;
                    break;
                }
            }
            break;
        }
        // cout<<endl;
    }
}
