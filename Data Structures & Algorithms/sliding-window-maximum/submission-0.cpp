class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;

        int left=0;

        for(int right=0;right<nums.size();right++){
            int maxi=INT_MIN;
            int i=left;
            if(right+1 >= k){
            while(i<=right){
              maxi=max(maxi,nums[i]);
              i++;
            }
            ans.push_back(maxi);
            left++;
            }
        }

        return ans;
    }
};
