class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i=1;

        unordered_set<int>s;

        for(int i=0;i<nums.size();i++){
          s.insert(nums[i]);
        }

        while(s.find(i) != s.end()){
          i++;
        }

        return i;
    }
};