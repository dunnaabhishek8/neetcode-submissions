class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        vector<pair<int,int> >v;

        for(int ele : nums){
            mp[ele]++;
        }
        
        for(auto ele : mp){
            v.push_back(make_pair(ele.second,ele.first));
        }

        sort(v.rbegin(),v.rend());
        vector<int>ans;

        for(int i=0;i<k;i++){
            ans.push_back(v[i].second);
        }
        return ans;
    }
};
