#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char arr[10][10];
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cin>>arr[i][j];
            }
        }
        int a=0,b=0,c=0,d=0,e=0;
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                if(((i==0 && j>=0 || j<= 9)||i==9||j==0||j==9)&&arr[i][j] == 'X'){
                    a++;
                }
                else if(i==0||i==9||j==0||j==9)
            }
        }
    }
}