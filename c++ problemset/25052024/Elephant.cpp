#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int k=x/5;
    if(x%5==0){
    cout<<k;  
    }
    else{
        cout<<k+1;
    }  
}