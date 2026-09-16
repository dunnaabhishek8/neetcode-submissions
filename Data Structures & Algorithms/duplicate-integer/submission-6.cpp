class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>m;

        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }

        for(auto &n:m){
            if(n.second > 1){
                return 1;
            }
        }
        return 0;
    }
};