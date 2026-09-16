class Solution {
public:
   int  getans(vector<int>& nums,int &target,int start,int end){
    while(start<=end){
       int mid=start+(end-start)/2;

       if(nums[mid]==target){
        return mid;
       }
       else if(nums[mid]<target){
        start=mid+1;
       }
       else{
        end=mid-1;
       }
    }
    return -1;
   }

    int search(vector<int>& nums, int target) {
        
        if(nums.size()==1){
            return nums[0]==target?0:-1;
        }
        int start = 0;
        int end = nums.size() - 1;

        while (start < end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] > nums[end])
                start = mid + 1;
            else
                end = mid;
        }
        if (start == 0)
        return getans(nums, target, 0, nums.size() - 1);
        
        if(nums[0]<=target && nums[start-1]>=target){
           return getans(nums,target,0,start-1);
        }
        else{
           return getans(nums,target,start,nums.size()-1);
        }
    }
};
