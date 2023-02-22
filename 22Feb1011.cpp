class Solution {
public:
    bool good(int x, vector<int> &w, int days) {
        int s = 0, cnt = 1;
        for(auto &i : w) {
            if(i>x) return false;
           if(s+i<=x){
               s+=i;
           }
           else{
               cnt++;
               s=i;
           }
        }
        return cnt<=days?true:false;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int s = 0, e = 1e8, ans = INT_MAX;
        while(s <= e) {
            int m = (s + e) /2;
            if(good(m, weights, days)) ans = min(ans, m), e = m - 1;
            else s = m + 1;
        }
        return ans;
    }
};
