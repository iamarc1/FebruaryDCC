class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
     vector<int> ans;
     int sl=s.length();
     int pl=p.length();
     if(pl>sl){
         return {};
     }
     vector<int> sv(26,0);
     vector<int> pv(26,0);
     int l=0,r=0;
     for(int l=0; l<pl; l++){
         pv[p[l]-'a']+=1;
     }
     while(r<sl){
         sv[s[r]-'a']+=1;
         if(r-l+1<pl){
             r++;
         }
        else if(r-l+1==pl){
             if(pv==sv){
                 ans.push_back(l);
             }
             
             sv[s[l]-'a']-=1;

             l++;
             r++;
         }
     }
      return ans;
    }
};
