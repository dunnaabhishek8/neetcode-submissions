class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0,t1=0,length=INT_MAX;

        // while(right<nums.size()){
        //     t1+=nums[right];
        //     right++;

        //     while(t1>=target){
        //         length=min(length,right-left);
        //         t1-=nums[left];
        //         left++;
        //     }
        // }


        for(int right=0;right<nums.size();right++){
            t1+=nums[right];

            while(t1>=target){
                length=min(length,right-left+1);
                t1-=nums[left];
                left++;
            }
        }

      return  length==INT_MAX?0:length;
    }
};