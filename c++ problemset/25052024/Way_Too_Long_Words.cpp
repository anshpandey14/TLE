#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int count = 0;
        int size = s.size();
        if(size<=10){
            cout<<s<<endl;
        }
        else{
            char a = s[0];
        char b = s[size-1];
        for(int i=0;i<size;i++){
            count++;
        }
        cout<<a<<count-2<<b<<endl;
        }
    }
}