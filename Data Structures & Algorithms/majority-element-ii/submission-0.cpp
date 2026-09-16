class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>v;
        int maxi=0;
        int num=0;
        int apperence=0;
        for(int i : nums){
            mp[i]++;
        }

        
        for(auto i : mp){
            if(i.second > nums.size()/3){
                v.push_back(i.first);
            }
        }
        return v;
  
    }
};