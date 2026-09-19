class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;

        for(int i=0;i<strs.size();i++){
            string s=strs[i];
            string sorting=strs[i];
            sort(sorting.begin(),sorting.end());

            mp[sorting].push_back(s);
        }
        
        vector<vector<string>>ans;
        
        for(auto ele : mp){
            ans.push_back(ele.second);
        }
        return ans;
    }
};
