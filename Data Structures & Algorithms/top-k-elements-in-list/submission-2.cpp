class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
     
       unordered_map<int,int>mp;
       vector<pair<int,int>> v;
       vector<int> ans;
       for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
       }

       for(auto i:mp){
          v.push_back({i.second,i.first});
       }
       
        sort(v.begin(), v.end(), greater<pair<int, int>>());

        for(int i=0;i<k;i++){
            ans.push_back(v[i].second);
        }

        return ans;
    }
}; 
