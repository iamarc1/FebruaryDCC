class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int j=num.size()-1;
        vector<int> ans;
        int carry=0;
        while(j>=0 || carry!=0 || k>0){
            int s=0;
            if(j>=0){
                s+=num[j];
                j--;
            }
            if(k>0){
                s+=(k%10);
                k=k/10;
            }
            if(carry!=0){
                s+=carry;
            }
            ans.push_back(s%10);
            carry=s/10;
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
