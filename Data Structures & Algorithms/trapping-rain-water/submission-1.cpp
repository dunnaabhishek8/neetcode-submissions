class Solution {
public:
    int trap(vector<int>& height) {
        vector<int>right(height.size(),0);
        vector<int>left(height.size(),0);
        right[0]=height[0];
        left[height.size()-1]=height[height.size()-1];

        for(int i=1;i<height.size();i++){
          right[i]=max(right[i-1],height[i]);
        }
        
        for(int i=height.size()-2;i>=0;i--){
            left[i]=max(left[i+1],height[i]);
        }
        int store=0;


        for(int i=0;i<height.size();i++){
            int less=min(right[i],left[i]);

            if(less-height[i] >= 1){
                store+=less-height[i];
            }
        }

        return store;

    }
};
