class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>ans(26,0);
        if(s.size() != t.size()){
            return 0;
        }

        for(int i=0;i<s.size();i++){
            ans[s[i]-'a']++;

            ans[t[i]-'a']--;
        }

        for(int i=0;i<26;i++){
            if(ans[i] !=0){
                return 0;
            }
        }
        return 1;
    }
};
