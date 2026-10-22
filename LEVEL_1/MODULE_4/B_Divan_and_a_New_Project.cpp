#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>> a(n);
        for(int i=0;i<n;i++){
            int t;
            cin>>t;
            a[i].first = t;
            a[i].second = i;
        }
        vector<int> ans(n+1);
        long long sum = 0;
        ans[0] = 0;
        sort(a.begin(),a.end(),greater<>());
        int pos = 1;
        int neg = -1;
        bool flag = true;
        for(auto &it:a){
            if(flag){
                long long dis = 2LL*abs(ans[0]-pos)*it.first;
                sum += dis;
                flag = !flag;
                ans[it.second+1] = pos;
                pos++;
            }
            else{
                long long dis = 2LL*abs(ans[0]-neg)*it.first;
                sum += dis;
                flag = !flag;
                ans[it.second+1] = neg;
                neg--;
            }
        }
        cout<<sum<<'\n';
        for(auto &it:ans){
            cout<<it<<" ";
        }
        cout<<"\n";
    }
    return 0;
}