#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        //int k = n;
        if((n-1)%3==0 || (n+2)%3==1){
            cout<<"First"<<endl;
        }
        else{
            cout<<"Second"<<endl;
        }

    }
}