class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<bool>v(256,0);
        
        

        int i,j=0;
        int maxi=0;

        while(j<s.size()){
          if(v[s[j]]==0){
            v[s[j]]=1;
            j++;
            maxi=max(maxi,j-i);
          }
          else{
              v[s[i]]=0;
              i++;
          }
        }

        return maxi;
    }
};
