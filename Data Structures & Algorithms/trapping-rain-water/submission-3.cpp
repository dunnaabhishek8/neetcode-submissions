class Solution {
public:
    int trap(vector<int>& height) {
        int leftmax=0,rightmax=0;
        int left=0,right=height.size()-1;
        int water=0;
        while(left<right){
            leftmax=max(leftmax,height[left]);
            rightmax=max(rightmax,height[right]);

            if(leftmax<rightmax){
            water+=leftmax-height[left];
            left++;
            }
            else{
            water+=rightmax-height[right];
            right--;
            }
        }
        return water;
    }
};
