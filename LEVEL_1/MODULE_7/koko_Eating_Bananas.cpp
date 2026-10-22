class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int e = 0;
        for(auto &i:piles) e = max(e,i);
        int s = 1;
        int sol = 0;
        while(s<=e){
            long long ans = 0;
            int mid = s+(e-s)/2;
            for(auto &i:piles) ans+= (i+mid-1)/mid; 
            if(ans>h) s=mid+1;
            else {
                sol = mid;
                e=mid-1;
            }
        }
        return sol;
    }
};