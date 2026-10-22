class Solution {
  public:
    int findPages(vector<int> &arr, int k) {
        // code here
        if(k>arr.size()) return -1;
        long long s = 0;
        long long e = 0;
        for(int &i:arr){
            e+=i;
            s=max(s,(long long)i);
        }
        long long ans = 0;
        while(s<=e){
            long long mid = s+(e-s)/2;
            // cout<<mid<<endl;
            long long t = 0,c=1;
            for(int &i:arr){
                t+=i;
                if(t>mid){
                   c++;
                   t=i;
                }
            }
            if(c>k){
                s=mid+1;
            }
            else{
                ans = mid;
                e=mid-1;
            }
        }
        return ans;
    }
};