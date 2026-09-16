class Solution {
public:
    bool del(string &s,int st,int en){
        while(st<en){
            if(s[st]!=s[en]){
                return 0;
            }
            st++;
            en--;
        }
        return 1;
    }

    bool validPalindrome(string s) {
        
        int st=0;
        int en=s.size()-1;

        while(st<en){
            if(s[st]==s[en]){
                st++;
                en--;
            }
            else{

                return del(s,st+1,en) || del(s,st,en-1);
            }
        }
        return true;
    }
};