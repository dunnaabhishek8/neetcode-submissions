class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int total_product=1;
        int count=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count++;
                continue;
            }
            else{
                total_product*=nums[i];
            }
        }

        vector<int>ans;

        for(int i=0;i<nums.size();i++){
            if(count == 1){
             
             if(nums[i]!=0){
                ans.push_back(0);
             }
             else{
                ans.push_back(total_product);
             }
            }
            else if(count > 1){
                ans.push_back(0);
            }
            else{
                ans.push_back(total_product/nums[i]);
            }
        }
        return ans;
    }
};
