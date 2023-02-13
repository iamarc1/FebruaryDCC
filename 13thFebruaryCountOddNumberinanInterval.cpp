class Solution {
public:
    int countOdds(int low, int high) {
        int left=0,right=0;
        if(low!=0){
            left=(low)/2;
        }
        right=(high+1)/2;
        return right-left;
    }
};
