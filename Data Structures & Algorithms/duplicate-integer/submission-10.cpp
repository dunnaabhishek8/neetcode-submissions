class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;

        for(auto ele :nums){
            mp[ele]++;

            if(mp[ele]>1){
                return true;
            }
        }
     return false;

    }
};