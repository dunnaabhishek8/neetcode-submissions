class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;

        for( int ele : nums){
            mp[ele]++;
        }

        vector<vector<int>>bucket(nums.size()+1);

        for(auto ele : mp){
            bucket[ele.second].push_back(ele.first);
        }
        vector<int>ans;
        for(int i=bucket.size()-1;i>=0;i--){
            for(int j=0;j<bucket[i].size();j++){
               ans.push_back(bucket[i][j]);

                if(ans.size() == k){
                return ans;
              }
            }
        }
        return ans;
    }
};
