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
        bool flag = true;
        for(int i=0;i<n;i++){
            s[i] = tolower(s[i]);
        }
        for(int i=0;i<n;i++){
            if( s[i] == 'm'  ) {
                if(i==0) continue;
                if(i-1>=0 && s[i-1] == 'm' ) continue;
                else {
                    flag = false;
                    break;
                }
            }
            else if(s[i] == 'e') {    
                if(i-1>=0 && (s[i-1] == 'm'  || s[i-1] == 'e')) continue;
                else {
                    flag = false;
                    break;
                }
            }
            else if(s[i] == 'o')  {    
                if(i-1>=0 && (s[i-1] == 'o'  || s[i-1] == 'e')) continue;
                else {
                    flag = false;
                    break;
                }
            }
            else if(s[i] == 'w') {    
                if(i-1>=0 && (s[i-1] == 'o'  || s[i-1] == 'w')) continue;
                else {
                    flag = false;
                    break;
                }
            }
            else {
                flag = false;
                break;
            }
        }
        if (flag && s[n-1] == 'w') cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}