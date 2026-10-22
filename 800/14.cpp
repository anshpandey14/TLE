#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(c%2 == 0){
           if(a+c/2 > b+c/2){
                cout<<"First"<<endl;
            }
            else{
                cout<<"Second"<<endl;
            } 
        }
        else{
            if(a+c/2+1 > b+c/2){
                cout<<"First"<<endl;
            }
            else{
                cout<<"Second"<<endl;
            }
        }
    }
}