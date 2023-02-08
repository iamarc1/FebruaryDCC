class Solution {
public:
    int jump(vector<int>& nums) {
       int reach=0,res=0,point=0;
        int n=nums.size();
       for(int i=0; i<n-1; i++){
           reach=max(reach,nums[i]+i);
           if(i==point){
               point=reach;
               res++;
           }
       }
       return res;
    }
};
