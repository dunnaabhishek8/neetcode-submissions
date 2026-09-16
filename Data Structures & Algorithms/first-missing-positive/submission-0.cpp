class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,int>mp;

        for(int i: nums){
            mp[i]++;
        }

        int j=1;

        for(auto i:mp){
          
          if(mp.find(j)!=mp.end()){
            j++;
          }
          else {
            return j;
          }
        }
    }
};