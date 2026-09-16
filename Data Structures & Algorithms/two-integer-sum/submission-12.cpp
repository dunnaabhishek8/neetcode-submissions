class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int> >ans;

        for(int i=0;i<nums.size();i++){
          ans.push_back({nums[i],i});
        }

        sort(ans.begin(),ans.end());

        int i=0;
        int j=nums.size()-1;

        while(i<j){
        if(ans[i].first + ans[j].first==target){
           int a = ans[i].second;
           int b = ans[j].second;

        if(a > b) swap(a, b);
        
         return {a, b};
         }
         if(ans[i].first+ans[j].first > target){
           j--;
         }
         else if(ans[i].first+ans[j].first<target){
           i++;
         }

        }
        return {};
    }
    
};
