#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        int pos = 0;
        int neg = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>0){
                pos++;
            }
            else{
                neg++;
            }
        }
        if(pos>=neg){
            if(neg%2==0){
                cout<<0<<endl;
            }
            else{
                cout<<1<<endl;
            }   
        }
        else if(pos<neg){
            if(pos==0){
                //int p = neg/2;
                if(neg%2==0 && (neg/2)%2==0){
                    cout<<neg/2<<endl;
                }
                else{
                    if(neg == 3){
                        cout<<3<<endl;
                    }
                    else{
                        cout<<(neg/2)+1<<endl;
                    } 
                }  
            }
            else {
                cout<<((pos+neg+1)/2) - pos<<endl;
            }
        }
    }
}