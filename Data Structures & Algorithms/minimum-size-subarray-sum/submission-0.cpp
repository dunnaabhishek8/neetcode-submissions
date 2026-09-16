class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0,right=0,t1=0,length=INT_MAX;

        while(right<nums.size()){
            t1+=nums[right];
            right++;

            while(t1>=target){
                length=min(length,right-left);
                t1-=nums[left];
                left++;
            }
        }

      return  length==INT_MAX?0:length;
    }
};