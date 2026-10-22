#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count = 0;
        while(1){
            string str = to_string(n);
            if(str.find('7')!= string::npos){
                cout<<count<<endl;
                break;
            }
            n = n + 9;
            count++;
            if(count %11==0){
                int p = count/11;
                count = count - p;
            }
        }
    }
}