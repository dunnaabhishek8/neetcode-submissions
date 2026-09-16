class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>m;

        for(int i=0;i<nums.size();i++){
           m[nums[i]]++;
        }

     for(int num : nums) {
            if(m[num] > 1) {
                return true;
            }
        }
        return 0;
    }
};