#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%4==0){
        cout<<"YES";
        return 0;
    }
    else if(n%7==0){
        cout<<"YES";
        return 0;
    }
    else{
        for(int i=1;i<=1000;i++){
            int t = i;
            bool flag = false;
            while(t>0){
                int q = t%10;
                if(q!=4 && q!=7){
                    flag = true;
                    break;
                }
                t/=10;
            }
            if(!flag && n%i==0){
                cout<<"YES";
                return 0;
            }
        }
        cout<<"NO";
    }
    return 0;
}