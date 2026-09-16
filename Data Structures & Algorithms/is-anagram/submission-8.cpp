class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size() != t.size()) return false;

        vector<int>visited(26,0);

        for(int i=0;i<s.size();i++){
            visited[s[i]-'a']++;
            visited[t[i]-'a']--;
        }

        for(int i=0;i<visited.size();i++){
            if(visited[i]!=0){
                return false;
            }
        }
        return true;
    }
};
