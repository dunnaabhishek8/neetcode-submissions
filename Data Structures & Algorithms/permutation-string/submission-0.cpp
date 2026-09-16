class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>f1(26,0),f2(26,0);

        for(int i=0;i<s1.size();i++){
            f1[s1[i]-'a']++;
        }
        int k=s1.size();
         
         for(int i=0;i<s2.size();i++){
            f2[s2[i]-'a']++;

            if(i>=k){
               f2[s2[i-k]-'a']--; 
            }

            if(f1==f2){
                return true;
            }
         }
         return false;

    }
};
