class Solution {
public:
    void sortColors(vector<int>& nums) {
        int lower=0;
        int middle=0;
        int higher=nums.size()-1;

        while(middle<=higher){
            if(nums[middle]==0){
                swap(nums[lower],nums[middle]);
                lower++;
                middle++;
            }
            else if(nums[middle]==1){
                middle++;
            }
            else{
              swap(nums[middle],nums[higher]);
              higher--;
            }
        }
    }
};