class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>m;

        for(auto i : nums){
            m[i]++;
        }

        for(auto ele : m){
            if(ele.second >1){
                return true;
            }
        }

        return false;
    }
};