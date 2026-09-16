class Solution {
public:
    int trap(vector<int>& height) {
        int maxheight=INT_MIN;
        int index=0;
        for(int i=0;i<height.size();i++){
            if(maxheight<height[i]){
                maxheight=height[i];
                index=i;
            }
        }
        int left=0;
        int right=0;
         int store=0;
        for(int i=0;i<index;i++){
          if(right>height[i]){
            store+=right-height[i];
          }
          else{
            right=height[i];
          }
        }

        for(int i=height.size()-1;i>index;i--){
            if(left>height[i]){
                store+=left-height[i];
            }
            else{
                left=height[i];
            }
        }
        return store;
    }
};
